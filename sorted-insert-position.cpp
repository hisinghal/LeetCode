#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &ar, int b) {

int left = 0, right = ar.size()-1; 
while(left<=right) {
int mid = left+ (right-left)/2; 
if(ar[mid] == b) return mid; 
if(ar[mid]<b) left = mid+1; 
else right = mid-1;
}
return left;

}

int searchInsert(vector<int> &ar, int b) {
	int n  = ar.size(); 
	if(ar[n-1]<b) return n; 
	if(ar[0]>b) return 0;
int index = binary_search(ar, b); 
if(ar[index] == b) return index; 
if(ar[index]<b) return index+1; 
return index;
}
int main(){

int n; cin>>n; 
vector<int>tmp; 
while(n--) {
	int t; 
	cin>>t;
	tmp.push_back(t);
}
int b;cin>>b;
cout<<searchInsert(tmp,b);
return 0;
}