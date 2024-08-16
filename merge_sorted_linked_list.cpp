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

ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* ar; ListNode* br; ListNode* prev; ListNode* start;
    ar = A; br = B; prev = NULL; start = ar;
    while(NULL != ar &&  NULL != br){
    	// out "here 1\n";
    	// out ar->val<<" "<<br->val<<endl;
    	// out "here 2\n";

        if(ar->val <= br->val) {prev = ar; ar = ar->next; }
        else {
            if(NULL == prev) {
                // start m hi 
                prev = br;
                start = br;
                br = br->next; 
                prev->next = ar;
               
            } else {
                prev->next = br;
                prev = br; 
                br = br->next;
                prev->next = ar;
            }
        }
        // out "starts here\n";
        // sout(start);out endl; 
        // sout(br); out (endl);
        // out" ends here\n";
    }
        if(NULL != br )prev -> next = br;
        return start;

}



int main() {
	int n1; in n1; 
	ListNode* A = sin(n1); 
	int n2; in n2; 
	ListNode* B = sin(n2);

	// sout(A); out endl; 
	// sout(B); out endl;

	ListNode* ans = mergeTwoLists(A, B);
	sout(ans);
	rn 0;

}