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

string longestCommonPrefix(vector<string> &ar) {
	string cur = ar[0]; 
	for(string t : ar) {
		string c = "";
		int n = min(cur.length(), t.length());
		for(int i=0; i<n; i++){
			if(cur[i] != t[i]) break;
			c += cur[i];
		}
		cur = c;
	}
	rn cur;



}

int main() {

	int n ; 
	in n; 
	vString ar; 
	while(n--) {
		string t; 
		in t; 
		ar.push_back(t);
	}
	out longestCommonPrefix(ar);
	rn 0;


}