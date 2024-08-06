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

string addBinary(string a, string b) {
	int n = a.length() - b.length();

	int diff = abs(n);
	string s;
	while (diff--) {
		s += '0';
	}
	string t;
	if (a.length() < b.length()) {
		s += a; t = b;
	}
	else {s += b; t = a;}

// out s; out endl; 
// out t; out endl; 

	int carry = 0; string ans;
	for (int i = s.length() - 1 ; i >= 0; i--) {
		int x = s[i] - '0';
		int y = t[i] - '0';
		int z = x + y + carry;
		// out "x y z carry "<<x<<" "<<y<<" "<<z<<" "<<carry<<endl;
		if (2 == z) {z = 0; carry = 1;}
		else if (3 == z) {z = 1; carry = 1;}
		else carry = 0;
		ans += to_string(z);
	}
	if (carry) ans += "1";
	reverse(ans.begin(), ans.end());
	return ans;
}


int main() {
	string a, b;
	in a; in b;
	out addBinary(a, b);
	rn 0;
}