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

bool isPalindrom(string s, int end){
	int i=0, j = end;
	while(i<j){
		if(s[i] != s[j]) return 0;
		i++; j--;
	} 
	return 1;
}

int solve(string s){
	int len = s.length();
	for(int i=s.length()-1; i>0; i--){
		if(s[i] == s[0]) {
			bool isPalindrom(s,i);
			if(isPalindrom) return (s.length()-1-i);
		}
	}
	return s.length();
}



int main() {
	string s; 
	cin>>s; 
	out solve(s);
	rn 0;
}