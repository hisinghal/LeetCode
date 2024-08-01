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

int singleNumber(const vInt & ar) {
	vInt bits(33, 0);

	for (int num : ar) {
		int i = 0;
		while (num) {
			bits[i] += num % 2;
			num /= 2;
			i++;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 33; i++) {
		bits[i] %= 3;
		cnt += bits[i] * pow(2, i);
	}
	rn cnt;


}


int main() {
	int n ;
	in n ;
	vInt ar;
	while(n--){
		int t; 
		in t; 
		ar.push_back(t);
	}
	out singleNumber(ar);
	rn 0;
}