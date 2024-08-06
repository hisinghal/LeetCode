#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef pair<int, int> pInt;

string solve(string s, int b) {
	char c ; 
	c = s[0]; 
	string ans = "";
	string c_string ;
	c_string = s[0];
	for(int i=1; i<s.length(); i++) {
		if(s[i] != c && c_string.length()!=b) {
			ans += c_string;
			c = s[i];
			c_string = c;
		} else if(s[i] != c && c_string.length() == b) {
			c_string = s[i];
			c = s[i];
		} else if(s[i] == c) {
			c_string += s[i];
		}
	}
	if(c_string.length() != b) ans += c_string; 
	rn ans;
}


int main() {
	string s; 
	cin>>s;
	int b; in b;
	out solve(s, b);
	rn 0;
}