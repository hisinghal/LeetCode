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

vString power2;

// void populate() {
// 	power2.push_back("1");
// 	for (int i = 1; i <= 10000; i++) {
// 		string s = power2[i - 1];
// 		string ans; int carry = 0;
// 		for (int j = s.length() - 1; j >= 0; j--) {
// 			int t = s[j] - '0';
// 			t = t * 2 + carry;
// 			int m = t % 10;
// 			carry = t / 10;
// 			ans += to_string(m);
// 		}
// 		if (carry) ans += to_string(carry);
// 		reverse(ans.begin(), ans.end());
// 		power2.push_back(ans);
// 	}
// }

string divideBy2(string s) {
	// out s.length()<<" "<<pos<<endl;
	int carry = 0, pos = 0; string ans;
    	for(int i = 0; i<s.length(); i++)
		{
            if(0 != s[i]-'0') {pos = i;break;}
	      
    }
    
	for (int i = pos; i < s.length(); i++) {
		int y = carry * 10 + (s[i] - '0');
		ans += (y / 2)+ '0';
		carry = y % 2;
	}
	out ans<<" ans ki length "<<endl;
	return ans;
	

}


int power(string s) {

	while((s.length())!= 1) {
		if(0 != (s[s.length()-1]-'0')%2 ) return 0;
		s = divideBy2(s);
	}
	out " it is s "<<s.length()<<endl;
	if((s[0]-'0')%2 == 0) return 1; 
    rn 0;
}

int main() {

	string s;
	in s;
	out power(s);
	rn 0;
}