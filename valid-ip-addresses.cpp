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

void copyVector(vString & ar, vString & br) {
	for(int i=0; i<br.size(); i++)
		ar.push_back(br[i]);
}



vString solve(string s, string c, int pos, int cnt) {
	vString ans;
	// out "s "; out s; out "c "; out c; out "pos "; out pos; out "cnt "; out cnt; out endl;
	if (cnt == 0) {
		// last dot over;
		string str = s.substr(pos);
		// out "here cnt is 0 and str is "; out str; out " ";
		if(str.length() == 0) return ans;
		if (str.length() > 3) return ans;
		int t = stoi(str);
		// out " t is "; out t; out endl;
		if(str.length()>1 && str[0]-'0' == 0) return ans;
		if (t <= 255) {ans.push_back(c + str); return ans;}
	}
// else need to put in c;
	string tmp = ""; 
	for(int i=pos; i<s.length() && i<pos+3; i++){
		tmp += s[i];
		int t  = stoi(tmp); 
		// out "tmp "; out tmp; out endl; out "t "; out t; out endl;
		if(t<=255){
			vString br = solve(s, c+tmp+".", i+1,cnt-1);
			copyVector(ans, br);
			if(t == 0) break;
		} 
		else break;
	}

return ans;
}

vector<string> restoreIpAddresses(string s) {
	return solve(s, "",0, 3);

}

int main() {
	string s;
	in s;
	vString ans = restoreIpAddresses(s);
	for (string t : ans)
		out t << " ";
	rn 0;

}