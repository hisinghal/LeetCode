#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int sqrt(int a) {

	int left = 1, right = a;
	while(right-left>1) {
		int mid = left+ (right-left)/2;
		if(mid*mid == a) return mid; 
		if(mid*mid > a) right = mid-1;
		else {
			left = mid;
		}
	}
	if(left*left<a && right*right>a) return left; 
	return right;

}

int main()
{
	int a; 
	cin>>a; 
	cout<<sqrt(a);
	return 0;

}