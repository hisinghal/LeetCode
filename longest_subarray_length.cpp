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
void vin(vString & ar, int n) {
	while (n--) {
		string t; in t;
		ar.push_back(t);
	}
}
void vout(vInt & ar) {
	// out ar.size()<<" ";
	for (auto i : ar) {
		out i << " ";
	}
	out endl;
}
void vout (vString & ar) {
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

int solve(vInt& ar) {
	int n = ar.size(); 
	iiumap map; 
	int sum = 0; int length = INT_MIN;
	for(int i=0 ;i<n; i++){
		if(0 == ar[i]) sum += -1; 
		else sum  += 1; 
		if(sum == 1) {
			length = max(length, i+1);
		} else {
			if(map.find(sum-1)!=map.end()) {
				length = max(length,i-map[sum-1]);
			}
		}
		if(map.find(sum) == map.end()) map[sum] = i; 
	}
	return length;
}

int main() {
	int n; in n; 
	vInt ar; vin(ar,n);
	int k = solve(ar);
	out k; 
	rn 0;
}