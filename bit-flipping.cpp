#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef pair<int, int> pInt;


int solve(int n) {
	// vInt ar;
	int i = 0, cnt = 0;
	while (n) {
		int t = n % 2;
		t = t ^ 1;
		cnt += t * pow(2, i);
		i++;
		n /= 2;
	}
	rn cnt;
}
int main() {
	int n ; in n;
	out solve(n);
	rn 0;
}