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

void vin(vInt & ar, int n) {
	while (n--) {
		int t; in t;
		ar.push_back(t);
	}
}



vInt maxone(vInt & ar, int b) {
	vInt cnt; int t = 0;

	for (int i = 0; i < ar.size(); i++) {
		if (0 == ar[i]) ++t;
		cnt.push_back(t);
	}

	int j = 1, i = 0, ans = INT_MIN, start = -1;
	while (j < ar.size()) {
		int k = cnt[j] - cnt[i];
		if (0 == ar[i]) ++k;
		if (k <= b) {
			int len = j - i + 1;
			if (len > ans) {ans = len; start = i;}
			j++;
		} else {
			i++;
		}
	}
	vInt answer;
	while (ans--) {
		answer.push_back(start);
		start++;
	}
	return answer;
}




int main() {
	int n; in n;
	vInt ar; vin(ar, n);
	int b; in b;
	vInt ans = maxone(ar, b);
	for (auto i : ans)
		out i << " ";
	out endl;
	rn 0;

}