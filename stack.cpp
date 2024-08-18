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

string simplifyPath(string ar) {

	stack<string>st;
	int n = ar.length();
	for (int i = 0; i < n; ) {
		if (ar[i] == '/') {
			string tmp;
			int j = i + 1;
			for (; j < n && ar[j] != '/'; j++)
				tmp += ar[j];
			i = j;
			if (0 == tmp.length() || tmp == "." || tmp == " ") continue;
			else if (tmp == "..")  {
				if (!st.empty())
					st.pop();
			}
			else { st.push(tmp);}
		}
	}

	vector<string> ans;
	while (!st.empty()) {
		ans.push_back(st.top());
		st.pop();
	}
	if (ans.size() == 0) return "/";
	string answer;
	answer += "/";
	for (int i = ans.size() - 1; i > 0; i--)
		answer += ans[i] + "/";
	answer += ans[0];

	return answer;
}



int maxSpecialProduct(vector<int> &ar) {
	stack<int>st;
	if (ar.size() <= 1) return 0;
	vector<int>left;
	st.push(0); left.push_back(-1);
	for (int i = 1; i < ar.size(); i++) {
		int t = ar[i];
		while (!st.empty() && ar[st.top()] <= t) st.pop();
		if (st.empty())left.push_back(-1);
		else {
			left.push_back(st.top());
		}
		st.push(i);
	}
	int n = ar.size();
	vector<int>right(n, -1);
	stack<int>rst; int j = n - 1;
	rst.push(n - 1); right[j] = -1;
	for (int i = n - 2; i >= 0; i--) {
		int t = ar[i];
		while (!rst.empty() && ar[rst.top()] < t)rst.pop();
		if (!rst.empty()) {
			right[i] = rst.top();
		}
		rst.push(i);
	}
	long long  pro = INT_MIN;
	int i = 0;
	while (i < n) {
		long long int  t1 = left[i], t2 = right[i], cp ;
		out "t1 " << t1 << " t2 " << t2 << endl;
		if (-1 == t1 || -1 == t2) cp = 0;
		else cp = (t1 * t2) % mod;
		pro = max(pro, cp);
		i++;
	}
	return pro;

}


vector<int> prevSmaller(vector<int> &ar) {
	stack<int>st;
	vector<int>pos;
	for (int i = 0; i < ar.size(); i++) {
		while (!st.empty() && ar[st.top()] >= ar[i] ) st.pop();
		if (st.empty()) pos.push_back(-1);
		else {
			pos.push_back(st.top());
		}
		st.push(i);
	}
	return pos;
}

int largestRectangleArea(vector<int> &ar) {
	stack<int>st;
	int n = ar.size();
	vector<int>left;
	for (int i = 0; i < ar.size(); i++) {
		int t = ar[i];
		while (!st.empty() && ar[st.top()] >= t) st.pop();
		if (st.empty())left.push_back(-1);
		else left.push_back(st.top());
		st.push(i);
	}

		vector<int>right(n, n);
	stack<int>rst; int j = n - 1;
	rst.push(n - 1); right[j] = -1;
	for (int i = n - 2; i >= 0; i--) {
		int t = ar[i];
		while (!rst.empty() && ar[rst.top()] >= t)rst.pop();
		if (!rst.empty()) {
			right[i] = rst.top();
		}
		rst.push(i);
	}

	vout(right);out endl;
	vout(left); out endl;

	int maxx = INT_MIN; 
	for(int i=0; i<n; i++){
		int width1 = i-left[i]; 
		int height = ar[i]; 
		int width2 = right[i]-i-1; 
		int area = (width1)*ar[i] + (width2)*ar[i]; 
		out " i "<<i<<" left "<<left[i]<<" right "<<right[i]<<" height "<<height<<" area "<<area<<" width1 "<<width1<<" width2 "<<width2<<endl;
		maxx = max(maxx, area);
	}
	return maxx;
}




int main() {
	int n; in n;
	vInt ar; vin(ar, n);
	out largestRectangleArea(ar);
	rn 0;


}
