#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int binary_search(vector<int> ar, int a) {

int left = 0, right = ar.size()-1; 
while(left<=right) {

int mid = left + (right-left)/2; 
if(ar[mid] == a) return mid;
else if(ar[mid]>a) right = mid-1; 
else left = mid+1;
}
return -1;

}

int last_occurence(vector<int>ar, int a, int index) {

	for(int i=index; i<ar.size(); i++)
		if(ar[i] != a) return --i;
	return index;
}

int first_occurence(vector<int>ar, int a, int index) {
	for(int i=index; i>=0; i--)
		if(ar[i] != a) return ++i;
	return index;
}



int numRange(vector<int> &ar, int b, int c) {
	vector<ll>solution;
	set<ll> set_solution;
	int count =0, sum =0; 
	for(int i=0; i<ar.size(); i++) {
		sum += ar[i];
		if(sum>=b){
			if(sum<=c) {
				count++;
				int start = sum-b;
				auto itr = set_solution.lower_bound(start);
				if(itr != set_solution.end())
				int index = binary_search(solution, start);
				if(index != -1) {
					index = last_occurence(solution, start, index);
					count += index; 
				}
			} else if(sum>c) {
				int start = sum-b; 
				int end = sum-c;
				int index1 = binary_search(solution,start);
				if(index1 != -1) index1 = last_occurence(solution, start, index1);
				int index2 = binary_search(solution, end);
				if(index2 != -1) index2 = first_occurence(solution, end, index2);
			}
		}
		else if(sum<b){solution.push_back(sum); set_solution.insert(sum);continue;}





	}
    
    
}


int mai() {
	int n; 
	cin>>n; 










}