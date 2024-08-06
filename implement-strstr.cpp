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

int strStr(const string s, const string t) {
	if(t.length() == 0 || s.length() == 0) return -1;

	if(s.length()<t.length()) return -1;

	// check now 
	int n = s.length(), m = t.length(); 
	for(int i=0; i<=n-m; i++){
		if(s[i] == t[0]) {
			string tmp = s.substr(i, m); 
			if(tmp == t) rn i;
		}
	}
	rn -1;
}


int main() {
	string s,t; 
	in s; in t; 
	out strStr(s,t);
	rn 0;
}