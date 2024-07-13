#include<bits/stdc++.h>
using namespace std;

#define ll long long
int lower_bound(vector<ll> &ar, int start_index, int end_index, ll search_value) {

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

int number_days_required(vector<ll> &ar, ll search_value) {
	// for(auto i:ar)
	// 	cout<<i<<" "; 
	// cout<<endl;

	int index = -1, cnt = 0; ll value = search_value;
	while (index != (ar.size() - 1)) {
		int c_index = lower_bound(ar, 0, ar.size() - 1, value);
	//	cout<<" c_index "<<c_index<<endl;
		if (c_index == index) return -1;
		index = c_index ;
		cnt ++;
		value = search_value + ar[index];

	}
	return cnt;
}



int solve(vector<int> &ar, int b) {

	vector<ll> sums; ll cnt = 0; int minn = INT_MAX;
	for (int i : ar)
	{
		cnt += i;
		sums.push_back(cnt);
		minn = min(minn, i);
	}


	ll maxx = sums[sums.size() - 1];
	// cout<<" maxx "<<maxx<<" minn "<<minn<<endl;
		ll capacity = maxx;
	while (minn <= maxx) {
		ll mid = minn + (maxx - minn) / 2;
	//	cout<<" mid "<<mid<<endl;
		int c_days = number_days_required(sums, mid);
	//	cout<<" c_days "<<c_days<<endl;
		if (c_days == -1) // increase
		{
			minn = mid + 1;
	//		cout<<" minn "<<minn<<endl;
			continue;
		} else if (c_days != -1) {
			if (c_days <= b) {
				capacity = min(capacity, mid);
				maxx = mid - 1;
	//			cout<<" capacity "<<capacity<<" maxx "<<maxx<<endl;

			} else {
				minn = mid + 1;
	//			cout<<" here here maxx "<<maxx<<" minn "<<minn<<endl;
			}
		}

	}
	return capacity;

}



int main() {
	int n;
	cin >> n;
	vector<int> tmp;
	while (n--) {
		int t;
		cin >> t;
		tmp.push_back(t);
	}
	int b; cin >> b;
	cout << solve(tmp, b);
	return 0;
}