#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef vector<ll> vll;
typedef vector<string> vString;
typedef pair<int, int> pInt;
typedef unordered_map<int,int> iiumap; 
typedef unordered_set<int> iuset; 
typedef map<int,int> iimap;
typedef set<int> iset;

int solve(vInt & ar, int b) {
	vll sar ; ll sum = 0; 
	for(int i: ar) {
		sum += i; 
		sar.push_back(sum);
	} 
	int size = ar.size(); ll cnt = 0;
	for(int i = 0; i < size; i++){
		ll t  = b+sar[i]-ar[i];
		int pos = lower_bound(sar.begin()+ i, sar.end(),t) - sar.begin();
		cnt += pos-i; 
		// out " i "<<i<<" pos "<<pos<<" sum "<<sar[pos-1]-sar[i]+ar[i]<<" "<<cnt<<endl;
	}
	return cnt; 
}

int main() {
	int n; in n;
	vInt ar;
	while(n--) {
		int t; 
		in t; 
		ar.push_back(t);
	}
	int b; in b; 
	out solve(ar, b);
	rn 0;
}