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


string longestPalindrome(string s) {
	string b = s;
	reverse(b.begin(), b.end());
	int len = s.length(), len_palindrom = INT_MIN;
	string palindrom = "";

	for (int i = 0; i < s.length(); i++) {
		string a = s.substr(i, len - i);

		a += '2';

		a += b.substr(0, len - i);

		// out a; out endl;

		// make lps
		vInt lps(a.length(), 0);
		for (int i = 0, j = 1 ; j < a.length(); ) {
			if (a[i] == a[j]) {lps[j] = i + 1; i++; j++;}
			else if (a[i] != a[j] && i == 0) {j++;}
			else {
				i = lps[i - 1];
			}
		}
		// for(int i : lps)
		// 	out i<<" ";
		// out endl;

		if (len_palindrom < lps[lps.size() - 1]) {
			len_palindrom = lps[lps.size() - 1];
			palindrom = s.substr(i, len_palindrom);
		}

	}
	return palindrom;





}

int main() {
	string s;
	cin >> s;
	out longestPalindrome(s);
	rn 0;
}