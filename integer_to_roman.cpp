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
int main() {
	int n ;
	in n;
	string ans;

	vector<string>tillTen = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
	string fortyy = "XL", fiftyy = "L", nintyy = "XC", hund = "C", forhun = "CD", fihun = "D", ninhun = "CM", tho = "M";

	if (n >= 1000) {
		int k = n / 1000;
		while (k--) {
			ans += tho;
		}
		n %= 1000;
	}
	if (n >= 900) {
		ans += ninhun;
		n -= 900;
	}

	if (n >= 500) {
		ans += fihun;
		n -= 500;
	}

	if (n >= 400) {
		ans += forhun;
		n -= 400;
	}

	if (n >= 100) {
		int k = n / 100;
		while (k--)
			ans += hund;
		n %= 100;
	}
	if (n >= 90) {
		ans += nintyy;
		n -= 90;
	}

	if (n >= 50) {
		ans += fiftyy;
		n -= 50;
	}
	if (n >= 40) {
		ans += fortyy;
		n -= 40;
	}

	if (n >= 10) {
		int k = n / 10;
		while (k--)
			ans += tillTen[9];
		n %= 10;
	}
	if (0 != n)
		ans += tillTen[n - 1];
	out ans;
	rn 0;


}