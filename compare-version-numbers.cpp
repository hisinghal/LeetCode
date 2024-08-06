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

int compare(string a, string b) {

	// remove forward 0 from both;
	int i = 0;
	for (i = 0; i < a.length() && a[i] - '0' == 0; i++) {}

		out "i "; out i<<endl;
	if (i)
		a = a.substr(i );

	i = 0;
	for (i = 0; i < b.length() && b[i] - '0' == 0; i++) {}

	if (i)
		b  = b.substr(i);

	out a; out endl; out b; out endl;
	if (a.length() < b.length()) return 0;
	if (a.length() > b.length()) return 1;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] - '0' < b[i] - '0')return 0;
		if (a[i] - '0' > b[i] - '0')return 1;
	}
	return -1;

}

int solve(string s1, string s2) {
	vString ar; vString br;
	string c_string = "";

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] == '.') {
			ar.push_back(c_string);
			c_string = "";
		} else c_string += s1[i];
	}
	ar.push_back(c_string);

	c_string = "";
	for (int i = 0; i < s2.length(); i++) {
		if (s2[i] == '.') {
			br.push_back(c_string);
			c_string = "";
		} else c_string += s2[i];
	}
	br.push_back(c_string);
	int k = ar.size()- br.size();
	int diff = abs(k);

	if (ar.size() < br.size() && diff) {
		while (diff--)
			ar.push_back("");
	} else if (ar.size() > br.size() && diff) {
		while (diff--)
			br.push_back("");
	}

	for (int i = 0; i < ar.size(); i++) {
		int t = compare(ar[i], br[i]);
		if (t == 1) return 1;
		else if (t == 0) return -1;
	}
	return 0;

}




int main() {
	string s1, s2;
	in s1; in s2;
	out solve(s1, s2);
	rn 0;
}