#include <bits/stdc++.h>
using namespace std;
#define ll long long
int books(vector<int> &ar, int b) {

	int minn = INT_MIN; ll maxx = 0;
	for (int i = 0; i < ar.size(); i++)
	{
		minn = max(minn, ar[i]);
		maxx += ar[i];
	}
	


}



int main() {
	int n;
	cin >> n;
	vector<int> ar;
	while (n--) {
		int t;
		cin >> t;
		ar.push_back(t);
	}
	int b;
	cin >> b;
	cout << books(ar, b);
	return 0;
}