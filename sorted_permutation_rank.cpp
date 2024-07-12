#include<bits/stdc++.h>
#define mod 1000003
#define ll long long int
using namespace std;

ll factorial(int n) {
ll cnt = 1;
for(int i=1; i<=n; i++)
    cnt = (cnt*i)%mod;

cnt = cnt%mod;
return cnt;

}

ll modularInverse(int a, int pow) {

/*if(pow == 0) return 1;

long int p = (modularInverse(a,pow/2))% mod;
 p = (p*p)%mod;
 return (pow%2 == 0 ? p : (p*a)%mod);
 */
     if (pow == 0) return 1;

    ll half = modularInverse(a, pow / 2) % mod;
    ll result = (half * half) % mod;
    if (pow % 2 != 0) result = (result * a) % mod;
    return result;



}

int findRanks(string s,vector<int>count, int index, int length) {

if(length <=0 ) return 0;

int current = s[index];

int prev = 0;
long int sum = 0;
for(int i=0; i<current; i++) {
    ll nominator = factorial(length-1);
    int selfcount = count[i];
    if (selfcount ) {
            ll denominator = factorial(--selfcount)% mod;
            //nominator = nominator/factorial(--selfcount);
            for(int j=0;j<count.size(); j++) {
                if(i!=j && count[j]) {
                denominator = (denominator*factorial(count[j]))%mod;
                }
            }
            ll k = modularInverse(denominator, mod-2) %mod;
            nominator = (k*nominator)%mod;
            sum += nominator;
            sum = sum%mod;
    }
}
count[current]--;
ll k = findRanks(s, count, ++index, --length);
return ((sum+k)%mod);

}


int findRank(string s) {
    vector<int> count(256,0);
    for(int i=0; i<s.length(); i++) {
            int t = s[i];
        count[t]++;
    }

return findRanks( s, count,0, s.length()) +1;



}



int main() {
string s;
cin>>s;
cout<<findRank(s);
return 0;
}
