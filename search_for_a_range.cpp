#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &ar, int b) {

int start = 0, end = ar.size()-1; 
while(start <= end) {
	int mid = start + (end-start)/2; 
	if(ar[mid] == b) return mid; 
	else if(ar[mid]<b) start = mid+1; 
	else end = mid-1;
}
return -1;
}


vector<int> solve(vector<int> &ar , int b) {

int i = binary_search(ar, b); 
int index = i;
vector<int> solution;
if(index == -1) {solution.push_back(-1);solution.push_back(-1); return solution;}
while(index >=0) {
	if(ar[index] == b) --index;
	else break;
}
++index;
solution.push_back(index);
index = i; 
while(index<ar.size()){
	if(ar[index] == b) ++index;
	else break;
}
--index;
solution.push_back(index);
return solution;
}
int main() {
int n ; 
cin>>n;
vector<int> tmp; 
while(n--) {
	int t; 
	cin>>t;
	tmp.push_back(t);
}
int b;
cin>>b;
vector<int> result = solve(tmp,b);
for(auto i: result)
	cout<<i<<" "; 
return 0;
}