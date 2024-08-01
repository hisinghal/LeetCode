#include <bits/stdc++.h>
using namespace std;

vector<int>num;
void populate_num() {
	num.push_back(1);
	num.push_back(1);
	num.push_back(2);
	for (int i = 4; i < 30000; i++)
		num.push_back(2 * num[i - 3]);

}

int populate_sum(vector<int> &ar) {
	int sum = 0, n = ar.size() - 1, t = 0;
	for (int i = n; i >= 0; i--) {
		sum += ar[i] * pow(2, t);
		t++;
	}
	return sum;
}

int solve(int a) {

	populate_num();
	int cnt = 0, pos = -1;
	for (int i = 0; i < num.size(); i++)
	{
		cnt += num[i];
		if (cnt >= a) {pos = i + 1; break;}
	}

	if (cnt == a) {
		// i+1 times 1;
		vector<int>ar(pos, 1);
		return populate_sum(ar);

	}

	// cnt > a;
	cnt -= num[pos - 1];
	cnt = a - cnt;
	int curent = pos - 2;

	vector<int>ans;
	ans.push_back(1);

	while (curent > 2) {
		if (cnt <= num[curent - 1]) {
			// first half;
			ans.push_back(0);
			curent -= 2;
		} else {
			cnt -= num[curent - 1];
			ans.push_back(1);
			curent -= 2;
		}
	}

	if (cnt == 1)
		ans.push_back(0);
	else
		ans.push_back(1);

	int last = ans.size()-1; 
	if(curent == 1) last--;
	for(int i = last; i>=0; i--)
		ans.push_back(ans[i]);
	return populate_sum(ans);

}





int main() {
	int n ;
	cin >> n;
	cout << solve(n);
	return 0;
}