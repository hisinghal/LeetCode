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

int threeSumClosest(vInt & ar, int b) {
	sort(ar.begin(), ar.end());

	int sum = 0, diff = INT_MAX;
	for (int i = 0; i < ar.size() - 2; i++) {
		int j = i + 1, k = ar.size() - 1;
		while (j < k) {
			int cur = ar[i] + ar[j] + ar[k];
			if (cur == b) return b;
			else if (cur < b) {
				int l = b - cur;
				if (l < diff) {diff = l ; sum = cur;}
				j++;
			} else {
				int l = cur - b;
				if (l < diff) {diff = l; sum = cur;}
				k--;
			}
		}
	}
	return sum;
}

int main() {
	int n;
	in n;
	vInt ar;
	while (n--) {
		int t;
		in t;
		ar.push_back(t);
	}
	int b;
	in b;
	out threeSumClosest(ar, b);
	rn 0;
}