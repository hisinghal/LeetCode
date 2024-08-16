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
void vout(vInt & ar) {
	for (auto i : ar) {
		out i << " ";
	}
	out endl;
}
void vout(vInt &ar, int start, int end) {
	for (int i = 0; i <= end; i++)
		out ar[i] << " ";
	out endl;
}


vector<int> intersect(const vector<int> &ar, const vector<int> &br) {
	int i = 0, j = 0; vInt ans;
	while (i < ar.size() && j < br.size()) {
		if(ar[i] == br[j]) {
			// out " i "<<i<<" j "<<j<<endl;
			int f1 = i+1, f2 = j+1;
			while(ar[f1] == ar[i]) f1++;
			while(br[f2] == br[j]) f2++;
			int fre = min(f1-i, f2-j);
			while(fre--){ans.push_back(ar[i]);}
			i = f1; j = f2;

		} else if(ar[i]<br[j]) i++;
		else j++;
	}
	rn ans;
}


int main() {
	int n1, n2;
	in n1;
	vInt ar; vin(ar, n1);
	in n2; vInt br; vin(br, n2);
	vout(ar); vout(br);

	vInt ans = intersect(ar, br);
	vout(ans);
	rn 0;
}