#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int lower_bound(vector<int> &ar, int b) {
int start = 0; int end = ar.size()-1;

while(start < end) {
int mid = start + (end-start)/2;
if(ar[mid] == b) return mid;
if(ar[mid]>b) end = mid;
else if(ar[mid]<b) start = mid+1;

}
return start;

}

int last_occurence(vector<int> &ar, int index, int value) 
{
while(ar[index] == value && index<ar.size())
	++index;
--index;
return index;

}

int first_occurence(vector<int> &ar, int index, int value) {

	while(ar[index] == value && index>=0)
		--index;
	++index;
	return index;
}




int solve(vector<int> &ar, int b) {
int index = lower_bound(ar,b);
if(ar[index] == b) {
	// number is here
	return last_occurence(ar, index, b) + 1;
}
if(ar[index] >b) {
	int t = first_occurence(ar,index,ar[index]);
	// cout<<"t "<<t<<endl;
	if(t-1>=0 && ar[t-1]<=b) return t;
	return 0;

} 
else {
	int t = last_occurence(ar, index, ar[index]);
	return t+1;
}




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
cout<<solve(tmp,b);
return 0;

}