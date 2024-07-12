#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &ar, int start, int end, int b) 
{
	int n = ar.size();

if(start == end) {
	if(ar[start] == b) return start;
	return -1;
}

int mid = start + (end-start)/2;

if(ar[mid] == b) return mid;

if(ar[mid]>b) {
	int t1 =-1, t2 = -1;

	if(mid+1 < n && ar[mid+1]<ar[mid]) t1 = solve(ar, mid+1, end, b);
	if(mid-1 >=0 && ar[mid-1]<ar[mid]) t2 = solve(ar, start, mid-1, b);
	return max(t1,t2);

}
else {
	int t1 =-1, t2 = -1;

	if(mid+1 < n && ar[mid+1]>ar[mid]) t1 = solve(ar, mid+1, end, b);
	if(mid-1 >=0 && ar[mid-1]>ar[mid]) t2 = solve(ar, start, mid-1, b);
	return max(t1,t2);
}



}

int solve(vector<int> &ar, int b) {
	return solve(ar, 0 , ar.size()-1,b);

}


int main(){

int n ; 
cin>>n; 
vector<int>tmp; 
while(n--) {
	int t; 
	cin>>t;
	tmp.push_back(t);
}
int b; 
cin>>b;
cout<<solve(tmp,b);
return 0;
}