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


int nTriang(vInt &ar) {
	sort(ar.begin(), ar.end());

	long long int ans = 0;


	for (int i = 0 ; i < ar.size(); i++)
		for (int j = i + 1; j < ar.size(); j++) {
			int t = ar[i] + ar[j];
			auto it = lower_bound(ar.begin() + j + 1, ar.end(), t);
				int pos = it - ar.begin();
				// out "pos i j "<<pos<<" "<<i<<" "<<j<<" "<<ans; out endl;

				// if(it == ar.end()) pos--;
				ans += (pos - j-1) % mod;

			
		}
	return ans % mod;
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
	out nTriang(ar);
	rn 0;
}