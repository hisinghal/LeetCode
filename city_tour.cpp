#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void facto(int a, vector<ll> &fact) {
ll cnt = 1;  fact.push_back(cnt);
for(int i=1;i<=1000;i++){
    cnt = cnt*i;
    cnt = cnt%mod;
    fact.push_back(cnt);
    }
}


ll inverseModular(int a, ll m) {
if(m == 0) return 1;
ll p = inverseModular(a, m/2);
p = p%mod;
p = (p*p)%mod;

return (m%2 == 0 ? p:(p*a)%mod);
}


int solve(int a, vector<int> &ar) {
vector<ll> factorial;
facto(1000, factorial);

int size = ar.size();
int notVisited = a-size;
ll ans = factorial[notVisited]%mod;

//cout<<" ans "<<ans<<endl;
ll demoninator = 1;
int prev = ar[0];
ll nominator = 1;

for(int i=1; i<size; i++){
        int k = ar[i];
        k = k-prev-1;
       // cout<<" k "<<k<<endl;
        int t1 = factorial[k] % mod;

      //  cout<<" t1 "<<t1<<endl;
    demoninator = (demoninator*t1) %mod;
    if(k)
    { nominator = (nominator*inverseModular(2,k-1))%mod; }
    prev = ar[i];
}

cout<<" demoninantor "<<demoninator<<endl;
cout<<" nominator "<<nominator<<endl;

demoninator = (demoninator*(factorial[ar[0]-1])%mod)%mod;

demoninator = (demoninator*(factorial[a-ar[size-1]])%mod)%mod;


ll r = inverseModular(demoninator,mod-2)%mod;

//cout<<" demoninantor here "<<r<<endl;
/*if(ar[0]-1)
nominator = nominator*inverseModular(2,ar[0]-2)%mod;
if(a-ar[size-1])
nominator = nominator*inverseModular(2,a-ar[size-1]-1)%mod;
*/

cout<<" demoninantor "<<r<<endl;
cout<<" nominator "<<nominator<<endl;

ans = (ans*nominator) %mod;
ans  = (ans*r) %mod;
return ans;
}

int main(){

int a;
vector<int> ar;
int n;
cin>>a>>n;
while(n--) {
    int t;
    cin>>t;
    ar.push_back(t);
}
cout<<solve(a,ar);
return 0;

}
