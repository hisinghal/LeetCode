#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef vector<string> vString;
typedef pair<int, int> pInt;
typedef unordered_map<int, int> iiumap;
typedef unordered_set<int> iuset;
typedef map<int, int> iimap;
typedef set<int> iset;

void vin(vInt & ar, int n) {
	while (n--) {
		int t; in t;
		ar.push_back(t);
	}
}
void vout(vInt & ar) {
	for (auto i : ar) {
		out i << " ";
	}
	out endl;
}
void vout(vInt &ar, int start, int end) {
	for (int i = 0; i <= end; i++)
		out ar[i] << " ";
	out endl;
}


struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

ListNode* sin(int n) {
	ListNode* prev ; ListNode* start;
	prev = NULL;
	while (n--) {
		int t; in t;
		ListNode* head = new ListNode(t);
		// ListNode* head = (struct ListNode*) malloc(sizeof(struct ListNode));
		head -> val = t; head -> next = NULL;
		if (prev != NULL) prev -> next = head;
		else if (prev == NULL) start = head;
		prev = head;
	}
	return start;
}

void sout(ListNode* head) {
	while (head != NULL) {
		out head-> val << " ";
		head = head-> next;
	}
}



void swapp (ListNode* a , ListNode* b) {

	swap(a->val, b->val);
}
ListNode* partition(ListNode* start, ListNode* last) {

	ListNode* head = start;
	while (head->next != last) head = head->next;

	int value = head->val;

	out " value = " << value << endl;

	head = start; ListNode* small = NULL;

	while (head->next != last) {
		out "head ki value " << head->val << endl;
		if (head->val <= value) {
			if (small == NULL) small = start;
			else small = small->next;
			swapp(small, head);
		}
		head = head->next;
		out " now here \n";
		sout(start); out endl;
	}
	if (small != NULL) out " near to out " << head->val << " " << small->next->val << endl;
	if (small != NULL) swapp(head, small->next);
	if (small == NULL) {swapp(head, start);}
	sout(start);

	return small;

}

void sort(ListNode* start, ListNode* last) {
	if (start->next != last)
	{	ListNode* pt = partition(start, last);
		
		if (pt == NULL) {
			sort(start->next, last);
		}
		else {
			out " here we are right now " << pt->val << endl;
			sort(start, pt->next);
			sort(pt->next->next, last);
		}
	}
	// return start;

}



ListNode* insertionSortList(ListNode* ar) {
	ListNode* head; ListNode* start; ListNode* cprev;
	head = ar; start = ar; cprev = ar;
	head = head-> next;
	while (head != NULL) {
		// out " 1 " << head->val << endl;
		ListNode* current; current = head;
		ListNode* c; c = start;
		ListNode* prev; prev = NULL;
		while ( c != head && c != NULL) {
			sout(start);
			out endl;

			// out " 2 " << c->val << endl;
			// out " 3 " << current->val << endl;
			// out " cprev vale "<<cprev->val<<endl;

			if (c->val <= current-> val) {prev = c; c = c-> next;}
			else {
				// out " 4 "<<c->val<<endl;
				if (prev == NULL) {
					// start
					start = current;
					head = head->next;
					cprev -> next = head;
					current-> next = c;
					// c-> next = head;
					break;
				} else {
					// not start;
					head = head-> next;
					cprev->next = head;
					prev -> next = current;
					current-> next = c;
					// c-> next = head;
					break;
				}
				// out " 5 "<<c->val<<endl;
			}
		}
		if (c == current) {
			// out " 8 "<<c->val<<endl;
			cprev = head; head = head-> next;
		}
	}
	return start;

}

ListNode* reverseList(ListNode* ar, int b) {
    if(1 == b) return ar; 
    ListNode* head; ListNode* prev; ListNode* first; first = NULL;
    head = ar->next; prev = ar; 
     ListNode* last_end; last_end = NULL;
    while(head != NULL){
    	// out "we are in loop "<<head->val<<endl;
        ListNode* current_end; 
        int cnt = b; current_end = prev;
        while(--cnt){
        	// out "start "<<b<<endl;
            ListNode* tmp ; 
            tmp = head->next; 
            head->next = prev; 
            prev = head;
            head = tmp;
            // if(head!= NULL)out "here here "<<prev->val<<" h"<<head->val<<endl;
        }
        // out " here it comes\n";
        if(last_end != NULL) last_end->next = prev; 
        else if(last_end == NULL) first = prev;

        // out " we are showing "<<first->val<<" "<<first->next->val<<" "<<first->next->next->val<<endl;
        last_end = current_end;
        if(head != NULL){
            prev = head;
            head = head->next;
        }
    }
    last_end->next = NULL;
    return first;
    
}


ListNode* swap(ListNode* ar) {
	   ListNode* head = ar; 
	   ListNode* prev = NULL; 
	   ListNode* start = NULL;
    // head; 
    while(NULL != head && NULL != head->next) {
    	// out head->val<<" "<<head->next->val<<endl;
        ListNode* tmp = head->next->next;
        ListNode* rmp = head->next;
        // out 1<<endl;
        head->next->next = head;
        // out 2<<endl;
        head->next = tmp;
        // out 3<<endl;

        if(prev == NULL){start = rmp;}
        else{
            // first time 
            // out 6<<endl;
            prev->next = rmp;
            // out 7<<endl;
        }
        // out 8<<endl;
        prev = head;
        // out 9<<endl;
        head = tmp;
        // out 10<<endl;
    }
    return start;
}








int main() {
	int n; in n;
	ListNode* head;
	head = sin(n);
	// sout(head);
	// int b; in b;
	out "now start \n";
	head = swap(head);
	sout(head);
	rn 0;
}