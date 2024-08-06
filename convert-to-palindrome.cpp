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
int isPalindrom(string s, string t, int start1, int end1, int start2, int end2, char add, bool toadd) {
	if (toadd)
		{s += add; end1++;}

	// out " s "; out s; out " t "; out t; out " start1 "; out start1; out " end1 "; out end1; out " end2 ";
	 // out end2; out " to add "; out add; out endl; 

	for (int i = start1, j = start2; i <= end1 && j <= end2; i++, j++)
		if (s[i] != t[j]) return 0;
	return 1;
}


int solve(string s) {
	int n = s.length();
	// if n is odd;
	if (n % 2) {
		int len = n / 2;
		string a = s.substr(0, len);

		int i = s.length() - 1;
		string b = "";
		while (len--) {
			b += s[i];
			i--;
		}

		// out "here uit is "; out a<<" "<<b<<endl;
		for (int i = 0; i < a.length(); i++) {
			if (b[i] != a[i]) {
				return max(isPalindrom(a, b, i + 1, a.length() - 1, i, b.length() - 1, s[n / 2 ], true),
				           isPalindrom(b, a, i + 1, b.length() - 1, i, a.length() - 1, s[n / 2 ], true));
			}
		}
		return 1;
	}  // even;
	int len = n / 2;
	string a = s.substr(0, len);
	int i = s.length() - 1;
	string b = "";
	while (len--) {
		b += s[i];
		i--;
	}
	for (int i = 0; i < a.length(); i++) {
		if (b[i] != a[i]) {
			return max(isPalindrom(a, b, i + 1, a.length() - 1, i, b.length() - 2, ' ', false),
			           isPalindrom(a, b, i, a.length() - 2, i + 1, b.length() - 1, ' ', false));
		}
	}
	return 1;
}

int main() {
	string s;
	in s;
	out solve(s);
	rn 0;
}