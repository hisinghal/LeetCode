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
typedef unordered_map<int, int> iiumap;
typedef unordered_set<int> iuset;
typedef map<int, int> iimap;
typedef set<int> iset;

void vin(vInt & ar, int n) {
	while (n--) {
		int t; in t;
		ar.push_back(t);
	}
}
void vout(vInt & ar) {
	for (auto i : ar) {
		out i << " ";
	}
	out endl;
}
void vout(vInt &ar, int start, int end) {
	for (int i = 0; i <= end; i++)
		out ar[i] << " ";
	out endl;
}
// int removeDuplicates(vector<int> &ar) {
// 	int i = 0, j = 1, len = 0;
// 	while (i < ar.size() && j < ar.size()) {
// 		if (ar[i] == ar[j]) {
// 			j++;
// 			while (ar[i] == ar[j] && j < ar.size())
// 			{
// 				ar[j] = -1;
// 				j++;
// 			}
// 			// ans.push_back(ar[i]);
// 			i = j;
// 			j = i + 1;
// 			len ++; len++;
// 		}
// 		else {len++; i++; j++;}
// 	}
// 	if (i < ar.size()) {++len;}
// 	int cnt = 0;
// 	for (int k = 0; k < ar.size(); k++) {

// 		if (ar[k] == -1) cnt++;
// 		else {
// 			swap(ar[k], ar[k - cnt]);
// 		}
// 	}

// 	while (ar[ar.size() - 1] == -1) ar.pop_back();
// 	return len;

// }

int removeElement(vector<int> &ar, int b) {
	int i=0; 
	while(i<ar.size()){
		if(ar[i] == b) ar[i] = -1;
		i++;
	}

	int cnt = 0;
	for (int k = 0; k < ar.size(); k++) {

		if (ar[k] == -1) cnt++;
		else {
			swap(ar[k], ar[k - cnt]);
		}
	}

	while (ar[ar.size() - 1] == -1) ar.pop_back();
	return ar.size();


}

int main() {
	int n; in n;
	vInt ar; vin(ar, n);
	int b; in b;
	out removeElement(ar, b);
	vout(ar);

	rn 0;
}