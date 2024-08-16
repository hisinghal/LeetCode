#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return
#define pb push_back

// #define vi vecor
typedef vector<int> vInt;
typedef vector<string> vString;
typedef pair<int, int> pInt;
typedef unordered_map<int, int> iiumap;
typedef unordered_set<int> iuset;
typedef map<int, int> iimap;
typedef set<int> iset;

int solve(vInt & ar, int b) {
	vInt zeros; int cnt = 0;
	for (int i : ar) {
		if (0 == i) ++ cnt;
		zeros.push_back(cnt);
	}
	// for(int i: zeros)
	// 	out i<<" "; 
	// out endl;

	int length = INT_MIN;
	for (int i = 0, j = 1; i < ar.size() && j < ar.size();) {
		int le = zeros[j] - zeros[i]; 
		if(0 == ar[i]) ++ le; 
		if(le > b) i++; 
		else if(le<=b) {length = max(length, j - i +1); j++;}
	}
	return length;
}

int main() {
	int n;
	in n ;
	vInt ar;
	while (n--) {
		int t;
		in t;
		ar.push_back(t);
	}
	int b; in b;
	out solve(ar, b);
	rn 0;

}