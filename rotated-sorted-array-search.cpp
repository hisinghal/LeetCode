#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

// int find_pivot(vector<int> & ar, int start, int end) {
// 	if (start == end) return ar[start];
// 	int mid = (start + end) / 2;

// 	cout<<"mid "<<ar[mid]<<endl;
// 	if(end-start == 1) {
// 		if(ar[mid+1] <= ar[mid]) return ar[mid];
// 		return ar[mid+1];
// 	}

// 	if (ar[mid - 1] <= ar[mid] && ar[mid+1] <= ar[mid]) {return ar[mid];}
// 	if (ar[mid-1] > ar[mid]) return find_pivot(ar, start, mid - 1);
// 	return find_pivot(ar, mid + 1, end);
// }

// int solve(vector<int> &ar, int b) {

// // find pivot;

// int pos = find_pivot(ar, 0, ar.size()-1);

// int pos1 = lower_bound(ar.begin(), ar.begin()+pos, b)-ar.begin();
// if(pos1<ar.size() && ar[pos1] == b) return pos1;

// if(pos+1 < ar.size())
// {
// 	int pos2 = lower_bound(ar.begin()+pos+1, ar.end(), b) - ar.begin();
// 	if(pos2<ar.size() && ar[pos2] == b) return pos2;
// }

// return -1;


// }


// unsigned int reverse(unsigned int a) {
//     // Do not write main() function.
//     // Do not read input, instead use the arguments to the function.
//     // Do not print the output, instead return values as specified
//     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     // 1 1 0 0  0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 0
//     // 11    00 0000 0000 0000 0000                   0000                     0000            0000
// vector<int>ar(32,0);
// int i=0;
// while(a) {
//     int t= a%2;
//     ar[i] = t;
//     i++;
//     a = a/2;
// }
// for(auto i : ar)
// 	cout<<i<<" ";
// cout<<endl;

// unsigned int t = 0; int k = 1;
// for(int i=0; i<32; i++){
//     t += ar[i]*pow(2,32-k);
//     k++;
// }
// return t;


// }


// int cntBits(vector<int> &ar) {
// 	int size = ar.size();
// 	vector<int> cnt(32, 0);
// 	for (int j = 0; j < size; j++) {
// 		int num = ar[j];
// 		int i = 0;
// 		while (num) {
// 			int t = num % 2;
// 			cnt[i] += t;
// 			num /= 2;
// 			i++;
// 		}
// 	}

// ll ans = 0; 
// for(int n : cnt){
// 	ans += (n*(size-n))%mod; 
// 	ans = ans%mod; 
// }
// ans = (ans*2)%mod; 
// return ans;
// }


int findMinXor(vector<int> &ar) {

	sort(ar.begin(), ar.end());
		vector<int> ans ; 
	
	ans.push_back(ar[0]^ar[1]);
	int minn = ans[0];
	for(int i=2; i<ar.size(); i++)
	{
		int t = ar[i-1]^ar[i];
		ans.push_back(min((ans[i-2]^t),t));
		minn = min(minn, ans[i-1]);
	}
	// for(int i: ans)
	// 	cout<<i<<" ";
	// cout<<endl;
	return minn;

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
	//int b;
	//cin >> b;
	// cout << find_pivot(ar, 0, ar.size()-1);
	// cout<<reverse(n);
	// cout << cntBits(ar);
	cout<<findMinXor(ar);
	return 0;

}