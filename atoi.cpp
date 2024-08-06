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

int atoi(const string s) {
	string c = "";
bool ispositive = 1;
	for (int i = 0; i < s.length(); i++) {
		if(i == 0 && s[i] == '-') ispositive = 0;
		else if(i == 0 && s[i] == '+') ispositive = 1;
		else if(s[i]-'0'>=0 && s[i]-'0'<=9) c += s[i];
		else break;
	}
	// you got sstring ;
	ll ans = 0, cnt = 1;
	for (int i = c.length() - 1; i >= 0; i--) {
		ans += (c[i]-'0')*cnt;
		cnt *= 10; 
		if(ans>INT_MAX && !ispositive) return INT_MIN;
		else if(ans>INT_MAX) return INT_MAX; 

	}
	if(!ispositive) return -1*ans;
	return ans;
}

int main() {
	out INT_MAX; out endl; out INT_MIN; out endl;
	string s;
	getline(cin, s);
	out atoi(s);
	rn 0;
}