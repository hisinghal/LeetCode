#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &ar , int b) {
	int start = 0, end = ar.size()-1; 
	while(start<=end) {
		int mid = start + (end-start)/2; 
		if(ar[mid] == b) return 1; 
		else if(ar[mid]<b) start = mid+1; 
		else end = mid-1;
	}
return -1;

}

int searchMatrix(vector< vector <int> > &ar, int b) {

int n = ar.size(), m = ar[0].size(); 
for(int i=0; i<n; i++) {
	if(b>=ar[i][0] && b<=ar[i][m-1]) return binary_search(ar, b);
}
return -1;



}




