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

// string serialize(vector<string> &ar) {
// 	string ans = ""; 
// 	for(string s : ar) {
// 		int n = s.length(); 
// 		ans += s ; 
// 		ans += to_string(n); 
// 		ans += "~";
// 	}
// rn ans;

// }

string solve(string s) {
	vInt cnt(26,0); 
	for(int i=0; i<s.length(); i++){
		cnt[s[i]-'a']++;
	}
	string ans  = ""; 
	for(int i=0; i<s.length(); i++) {
		if(cnt[s[i]-'a']) {
			ans += s[i]; 
			ans += to_string(cnt[s[i]-'a']);
			cnt[s[i]-'a'] = 0;
		}
	}
	rn ans;
}


int main()
{
// int n; in n;
// vString ar; 
// while(n--) {
// 	string s; 
// 	in s; 
// 	ar.push_back(s);
// }
// out serialize(ar);
	string str; 
	in str; 
	out solve(str);
rn 0;

}