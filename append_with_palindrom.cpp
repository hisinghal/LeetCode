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

	int len = s.length();
	string b = s;

	reverse(b.begin(), b.end());


	s += '2';
	s += b;

	// s += '2';



// create LMP;
	vInt lmp(s.size(), 0);
	// lmp.push_back(0);
	for (int i = 0, j = 1; j < s.length(); ) {
		if (s[i] == s[j]) {
			lmp[j] = i + 1;
			i++;
			j++;
		}
		else if (i == 0) {
			lmp[j] = 0;
			j++;
		} else {
			i = lmp[i - 1];
		}
	}

	int r = lmp[lmp.size() - 1];
	return len - r;

}

int main() {
	string s;
	in s;
	out solve(s);
	rn 0;
}