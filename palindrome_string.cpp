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

int isPalindrome(string s) {

	//out s; 
	// out endl;

	string str = "";
	for(int i=0; i<s.length(); i++){
		// out i; out " ";
		int t = s[i];
		if(t>=65 && t<=90) str += (char)tolower(t);
		else if(t>=97 && t<=122) str += s[i];
		else if(t>=48 && t<=57) str += s[i];
	}
	// out str; out endl;
	int i=0, j= str.length()-1;
	while(i<j){
		if(str[i]!=str[j]) return 0;
		i++; j--;
	}
	return 1;
}

int main(){
	string s; 
	getline(cin, s); 
	cout<<isPalindrome(s);
	rn 0;	
}