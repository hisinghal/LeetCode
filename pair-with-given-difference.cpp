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
typedef unordered_map<int,int> iiumap; 
typedef unordered_set<int> iuset; 
typedef map<int,int> iimap;
typedef set<int> iset;


// a1-a2 = b; a1 = a2 +b; a2 = a1-b


int solve(vInt &ar, int b) {
	iuset myset; 
	for(int i: ar) {
		int t = i-b, k = i+b; 
		if(myset.find(t) != myset.end() || myset.find(k) != myset.end()) return 1; 
		myset.insert(i);
	}
	return 0;
}



int main(){
	int n; 
	in n;
	vInt ar; 
	while(n--){
		int t; 
		in t; 
		ar.push_back(t);
	}
	int b; 
	in b; 
	out solve(ar,b);
	rn 0;
}