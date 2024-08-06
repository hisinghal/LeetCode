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
int solve(string s) {
	map<string, int> roman;
	roman["I"] = 1;
	roman["IV"] = 4;
	roman["V"] = 5;
	roman["IX"] = 9;
	roman["X"] = 10;
	roman["XL"] = 40;
	roman["L"] = 50;
	roman["XC"] = 90;
	roman["C"] = 100;
	roman["CD"] = 400;
	roman["D"] = 500;
	roman["CM"] = 900;
	roman["M"] = 1000;

	int ans = 0;
	if (s.length() == 1) return roman[s];

	// length is atleast 2
	int i = 0;
	for ( i = 0 ; i < s.length() - 1; ) {
		string a, b; 
		a= s[i], b = s[i+1];
		int k = roman[a];
		int l = roman[b];
		if (k < l) {
			// take combine;
			// rint.push_back(l-k);
			ans += l - k;
			i += 2;
		} else {
			// rint.push_back(k);
			ans += k;
			i++;
		}
	}
	// out ans; out endl;
	string c; c = s[s.length()-1];
	if (s.length() - 1 == i) ans += roman[c];

	return ans ;
}


int main() {
	string s;
	cin >> s;
	out solve(s);
	return 0;
}