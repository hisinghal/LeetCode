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

int lengthOfLastWord(string s) {

	int n = s.length();
	int cnt = 0;
	bool again = false;
	for (int i = n - 1; i >= 0; i--) {
		char ch;
		ch = tolower(s[i]);
		if (ch - 'a' >= 0 && ch - 'a' <= 26) {again = true; ++cnt;}
		else if (again) break;
	}
	return cnt;


}


string solve(string s) {

	vString ans; string c = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			if (c.length() != 0) {ans.push_back(c); c = "";}
		} else c += s[i];
	}
	if(c.length() !=0 ) ans.push_back(c);

string ar = "";
	for (int i = ans.size() - 1; i >= 0; i--) {
		ar += ans[i] + " " ;
	}
	ar.pop_back();
	return ar;

}

int main() {
	string s;
	getline(cin, s);
	// out lengthOfLastWord(s);
	out solve(s);out "k";
	rn 0;
}