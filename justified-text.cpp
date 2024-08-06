#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef vector<string> vString;
typedef pair<int, int> pInt;

string arrange_space(vString &ar, int start, int end, int cnt, bool isLastLine) {

	cnt += end - start;
	 out "start "; out start; out " end "; out end; out " cnt "; out cnt; out endl;
	string ans = "", space = " ";



	if (isLastLine || end == start) { //out "here here i am ";
		for (int i = start; i < end; i++)
			ans += ar[i] + space;
		ans += ar[end];
		cnt -= (end - start);
		if (cnt) {
			while (cnt--)
				ans += space;
		}
		return ans;

	}

	int n = end - start;
// --n;


	int num = cnt / n;
	string tmp = "";
	while (num--)
		tmp += space;

	vString sp(n, tmp);

	int rest = cnt % n;
	int i = 0;
	while (rest--) {
		sp[i] += space;
		i++;
	}
	// out "good till here \n";

	int j = 0;
	for (int i = start; i < end; i++) {
		ans += ar[i] + sp[j];
		// out ans; out endl;
		j++;
	}
	ans += ar[end];
	rn ans;
}




vector<string> fullJustify(vector<string> &ar, int b) {

	vString ans; int cnt = 0, start = 0; bool isLastLine = false;
	for (int i = 0; i < ar.size(); i++) {

		if (i == ar.size() - 1) isLastLine = true;

		int t = cnt + ar[i].length();
		// out "t "; out t; out endl;
		if (t == b) {
			string a = arrange_space(ar, start, i, 0, isLastLine);
			ans.push_back(a);
			cnt = 0;
			start = i + 1;
		} else if (t < b) {
			// space ++;
			cnt = t + 1;
		} else {
			// space--;
			cnt--;
			string a = arrange_space(ar, start, i - 1, b - cnt, false);
			ans.push_back(a);
			start = i;
			i--;
			cnt = 0;

		}
	}

	if (cnt) {
		// out "i am here\n";
		string a = arrange_space(ar, start, ar.size() - 1, b - cnt+1, true);
		ans.push_back(a);
	}
	rn ans;
}

int main() {
	vString ar;
	int n ;
	in n;
	while (n--) {
		string tmp;
		cin >> tmp;
		ar.push_back(tmp);
	}
	int b; in b;
	vString ans = fullJustify(ar, b);
	for (string s : ans)
	{out s; out endl;}

	rn 0;
}