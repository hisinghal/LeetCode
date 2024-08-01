#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef pair<int, int> pInt;


int solve(vInt & ar) {
	if(ar.size()%2 == 0) return 0; 
	int cnt = 0; 
	for(int i=0; i<ar.size(); i += 2) {
		cnt = cnt^ar[i];
	}
	rn cnt;
}


int main()
{
int n; 
in n; 
vInt ar; 
while(n--) {
	int t; 
	in t; 
	ar.push_back(t);
}
// for(auto i: ar)
// 	ot i;
out solve(ar);
rn  0; 
}