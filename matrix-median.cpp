#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &ar, int start_index, int end_index, int search_value) {

	if (start_index == end_index)
		return (ar[start_index] <= search_value ? start_index : -1);
	int mid = start_index + (end_index - start_index) / 2;
	if (ar[mid] == search_value) return mid;
	else if (ar[mid] > search_value) return lower_bound(ar, start_index, mid, search_value);
	else {
		int t = lower_bound(ar, mid + 1, end_index, search_value);
		return (t == -1 ? mid : t);
	}
}

vector<int> les_equal(vector<int> & ar, int value, int i) {
	// index is of equal;
	int cnt = 0;
	vector<int> ans;
	int index = i;
	while (index >= 0) {
		if (ar[index] != value) break;
		++cnt; --index;
	}
	ans.push_back(index + 1);
	index = i + 1;
	while (index < ar.size()) {
		if (ar[index] != value) break;
		++cnt; ++index;
	}
	ans.push_back(cnt);
	return ans;

}

vector<int> findSmaller(vector<vector<int> >&ar, int value) {
	int cnt = 0, equal = 0;
	int size = ar[0].size();
	for (int i = 0; i < ar.size(); i++) {
		// cout<<"i "<<i<<endl;
		// ith row
		if (ar[i][size - 1] < value) cnt += size;
		else if (ar[i][0] > value) continue;
		else {
			int index = lower_bound(ar[i], 0, size - 1, value);
			// check if equal or lesser
			if (ar[i][index] < value) cnt += index + 1;
			else { // equal wala case ;
				vector<int> ans = les_equal(ar[i], value, index);
				cnt += ans[0]; equal += ans[1];
				// cout<<"ans[0] "<<ans[0]<<" "<<ans[1]<<endl;
			}
		}
	}
	vector<int> answer;
	answer.push_back(cnt);
	answer.push_back(equal);
	return answer;
}

int findMedian(vector<vector<int> > &ar) {
	int row = ar.size();
	int column = ar[0].size();
	int target = (row * column) / 2;
	int minn = INT_MAX, maxx = INT_MIN;
	for (int i = 0; i < ar.size(); i++) {
		minn = min(minn, ar[i][0]);
		maxx = max(maxx, ar[i][column - 1]);

	}

	while (minn <= maxx) {
		int mid = minn + (maxx - minn) / 2;
		// cout<<" minn maxx mid "<<minn<<" "<<maxx<<" "<<mid<<endl;
		vector<int> cal = findSmaller(ar, mid);
		int smaller = cal[0];
		int equal = cal[1];
		int big = row * column - smaller - equal;
		// cout<<"smaller equal big "<<smaller<<" "<<equal<<" "<<big<<endl;

			// smaller = big
			int diff = abs(smaller - big);
			// cout<<"diff "<<diff<<endl;
			if (diff <= equal) {return mid;}
			if (smaller > big) maxx = mid - 1;
			else minn = mid + 1;

	}
	return minn;

}

int main() {
	int n, m; 
	cin>>n>>m; 
	vector<vector<int> > ar(n, vector<int> (m,0)); 
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			int t;
			cin>>t; 
			ar[i][j] = t;

		}
	}

cout<<findMedian(ar);

return 0;

}