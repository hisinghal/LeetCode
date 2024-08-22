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

void doit(unordered_set<pair<int,int>> & st, vector<int>& pos, int element){
	if()


}


int longestConsecutive(const vector<int> &ar) {
    unordered_set<pair<int,int>>st; 
    for(int i =0 ; i<ar.size(); i++){
        st.insert({ar[i],i});
    }
    int prev = INT_MIN; 
    int cnt = 0, ans = 1;
    vector<int>pos(ar.size(),0);
    for(int i=0; i<ar.size(); i++){

    }



    return ans;
    
}


int main(){
	int n; in n; 
	vInt ar; vin(ar,n);
	out longestConsecutive(ar);
	rn 0;
}