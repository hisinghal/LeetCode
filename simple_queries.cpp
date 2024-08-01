#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

vector<ll> num_of_divisor(100001, 1);

int power(int a, int n) {
	if (a == 0) return 0;
	if (n == 0) return 1;
	ll ans = power(a, n / 2) % mod;
	ans = (ans * ans) % mod;
	if (n % 2) ans = (ans * a) % mod;
	return ans;
}

void populate_num_divisor()
{
	for (int i = 2; i < 100002; i++)
		for (int j = i; j < 100002; j += i)
			++num_of_divisor[j];
}



vector<int> solve(vector<int> &ar, vector<int> &queries) {
	// populate the start array i.e largest number subarray;
	populate_num_divisor();

	int size = ar.size();
	vector<int> left_big(size, 1);
	vector<int> right_big(size, 0);


	for (int i = 0; i < size; i++) {
		for (int j = i - 1; j >= 0; j--)
			while (ar[j] <= ar[i]) ++left_big[i];
	}

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++)
			while (ar[j] <= ar[i]) ++right_big[i];
	}



	vector<int> subarray;
	for (int i = 0; i < size; i++)
		while (left_big[i]--)
			subarray.push_back(ar[i]);

	for (int i = 0; i < size; i++)
		while (right_big[i]--)
			subarray.push_back(ar[i]);

	for (int i = 0; i < subarray.size(); i++) {
		ll div = num_of_divisor[subarray[i]];

		subarray[i] = (power(subarray[i], div / 2) % mod);
	}

	sort(subarray.begin(), subarray.end(), greater<int> ());

	vector<int> ans;
	for (int i = 0; i < queries.size(); i++) {
		ans.push_back(subarray[queries[i]]);
	}
	return ans;


}



int main() {
	int n;
	cin >> n;
	vector<int> array;
	while (n--) {
		int t;
		cin >> t;
		array.push_back(t);
	}
	int b;
	cin >> b;
	vector<int> queries;
	while (b--) {
		int t;
		cin >> t;
		queries.push_back(t);
	}
	vector<int> ans = solve(array, queries);
	for(auto i: ans)
	cout << i << " ";
	cout << endl;


	return 0;
}