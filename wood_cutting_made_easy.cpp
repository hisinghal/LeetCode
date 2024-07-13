#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll count(vector<int> &ar, int b) {
	int cnt = 0; 
	for(int height: ar){
		if(height>b) cnt += height-b;
	}
	return cnt;
}


int solve(vector<int> &ar, int b) {

int minn = 0, maxx = INT_MIN; 
for(int i=0; i<ar.size(); i++){
	//minn = min(minn, ar[i]);
	maxx = max(maxx, ar[i]);
}
// cout<<"maxx " <<maxx<<endl;

int c_height = 0, height = 0,ans = INT_MAX; 
while(minn <= maxx) {
	height = minn + (maxx-minn)/2; 
  cout<<"maxx " <<maxx<<" minn "<<minn<<" height "<<height<<endl;
	ll t = count(ar, height);
	// cout<<" t "<<t<<endl;
	if(t == b) return height;
	if(t>b) {
		  if(ans > t) {ans = t; c_height = height;}
		minn = height+1; 
	} else maxx = height-1;
}
return c_height;
}



int main()
{

int n ; 
cin>>n; 
vector<int>tree;
while(n--) {
	int t; 
	cin>>t;
	tree.push_back(t);
}
int b; 
cin>>b; 
cout<<solve(tree,b);
return 0;
}