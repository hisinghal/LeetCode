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

vector<string> deserialize(string ar) {
	vString ans ; 

	string c_str = ""; 
	for(int i=0; i<ar.length(); i++) {
		if((ar[i]-'a'<0 || ar[i]-'a'>26) && c_str.length() != 0) {ans.push_back(c_str); c_str = "";}
		else if(ar[i]-'a'>=0 && ar[i]-'a'<=26) c_str += ar[i];
	}
	rn ans;
}

int main() {
	string s; 
	cin>>s; 
	vString ans = deserialize(s);
	for(auto s : ans)
		out s; 
	rn 0;


}