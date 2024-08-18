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



void rearrange(queue<int> &q, queue<int> &qs, int maxx) {
    while(q.front() != maxx){
        int front = q.front(); 
        q.pop(); 
        qs.push(front);
    }
    
}


vector<int> slidingMaximum(const vector<int> &ar, int b) {
    queue<int>q; vector<int> ans;
    int maxx = INT_MIN, n = ar.size(); 
    for(int i=0; i<b && i<n; i++){
        q.push(ar[i]); 
        maxx = max(maxx, ar[i]);
    }
    ans.push_back(maxx);
    if(b>=n) { return ans;}
    
    queue<int>qs; 
    rearrange(q,qs,maxx);
    
    for(int i=b; i<n; i++){
    	out "i "<<i<<endl; vout(ans);out endl;
        if(!qs.empty()){
        	out i<<" i am here\n";
            qs.pop(); 
            q.push(ar[i]);
            if(ar[i]>maxx){maxx = ar[i];rearrange(q,qs,maxx);}
            // ans.push_back(maxx);
        } else {
        	out i<<" now i am here \n";
            int front = q.front(); 
            q.pop();
            q.push(ar[i]);
            if(ar[i] >= maxx){maxx = ar[i];}
            else if(ar[i]<maxx) {
                if(front == maxx) {
                    while(!q.empty() && q.front()<ar[i]) {
                        int t = q.front();
                        qs.push(t);
                        q.pop();
                        }
                    maxx = q.front();
                }
            }
        }
        ans.push_back(maxx);
    } 
    return ans;
}





int main(){
	vInt ar; int n; in n; 
	vin(ar,n); 
	int b; in b;
	vInt ans = slidingMaximum(ar,b);
	vout(ans);
	rn 0;

}