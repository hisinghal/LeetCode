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
typedef unordered_map<int, int> iiumap;
typedef unordered_set<int> iuset;
typedef map<int, int> iimap;
typedef set<int> iset;

int solve(vInt &ar, int b) {
	vInt cnt(40006, 0);
	int i = 0, j = 0, c = 0, ans = 0;
	while (j < ar.size()) {
		out "j "<<j<<endl;
		cnt[ar[j]]++;
		if (cnt[ar[j]] == 1) { c++;}
		if (c <= b) {ans += j - i + 1; j++; continue;}
		else if (c > b) {
			while (c > b) {
				cnt[ar[i]]--;
				if (cnt[ar[i]] == 0) {
					c--;
					ans += j-i;
					j++;
				}
				i++;
			}
		}
	}
	return ans;
}

int main() {
	int n; in n;
	vInt ar;
	while (n--) {
		int t; in t;
		ar.push_back(t);
	}
	int b; in b;
	out solve(ar, b); 
	out solve(ar,b-1);
	rn 0;
}