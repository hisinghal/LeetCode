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


int minimize(const vector<int> &ar, const vector<int> &br, const vector<int> &cr) {
	int ans = INT_MAX;
	int i = 0, j = 0, k = 0;
	int n1 = ar.size(), n2 = br.size(), n3 = cr.size();
	while (i < n1 && j < n2 && k < n3) {
		int l1 = abs(ar[i] - br[j]), l2 = abs(br[j] - cr[k]), l3 = abs(cr[k] - ar[i]);
		ans = min(ans, max(l1, max(l2, l3)));
		// out " i "<<ar[i]<< " j "<<br[j]<<" k "<<cr[k]<<" ans "<<ans<<endl;
		if (l1 >= l2 && l1 >= l3) {
			if (ar[i] >= br[j]) {
				j++;
			} else i++;


		} else if (l2 >= l3 && l2 >= l1) {
			if (br[j] >= cr[k]) k++;
			else j++;

		} else {
			if (ar[i] >= cr[k]) k++;
			else i++;

		}
	}
	return ans;
}


int main() {
	int n1, n2, n3;
	in n1; 
	vInt ar; vin(ar,n1); 
	in n2; 
	vInt br; vin(br,n2);
	in n3;
	vInt cr; vin(cr,n3);
	out minimize(ar,br,cr); 
	rn 0;

}