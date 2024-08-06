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

// string solve(string s, string t) {
// 	// check for correct 
// 	int cnt = 0;
// 	vInt st(10,0); vInt tt(10,0);

// 	for(int i=0; i<s.length(); i++) {
// 			if(s[i] == t[i]) ++cnt; 
// 			st[s[i]-'0']++;
// 			tt[t[i]-'0']++;
// 		}
// 	int pos = 0; 
// 	for(int i=0; i<10; i++){
// 		pos += min(st[i], tt[i]);
// 	}
// 	string ans = ""; 
// 	ans += to_string(cnt); 
// 	ans += "A"; 
// 	ans += to_string(pos-cnt); 
// 	ans += "B"; 
// 	rn ans;



// }

int solve(string s, string t) {
	if(s.length() != t.length()) rn 0;
	vInt st(26, 0); vInt tt(26,0);
	for(int i=0; i<s.length(); i++){
		st[s[i]-'a']++; 
		tt[t[i]-'a']++;
	}
	for(int i=0; i<26; i++)
		if(st[i] != tt[i]) rn 0; 
	rn 1;

}


int main() {
	string s, t;
	in s; in t;
	out solve(s,t);
	rn 0;
}