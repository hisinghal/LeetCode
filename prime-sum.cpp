#include<bits/stdc++.h>
using namespace std;

void primesum(int ar) {
    // find prime number .
    int limit = (int)sqrt(ar);
    vector<int> primes(ar+1, 1) ;

    for(int i=2; i<= limit; i++)
    {
        int cnt = 2;
        while(i*cnt <= ar)
        {
            primes[i*cnt] = 0;
            cnt++;

        }
    }
    cout<<" till here worked\n";
   /* vector<int> prime_list;
    for(int i=2; i<(ar+1); i++) {
        if(primes[i])
        {
            prime_list.push_back(i);
        cout<<"i "<<i<<endl;
        }
    } */


    for(int i=2; i<= limit; i++){
        if(primes[i])
            {
        int k = ar-i;
        if(primes[k]) {
            vector<int> result;
            cout<<i<<" "<<k<<endl;
            exit;
            /*result.push_back(prime_list[i]);
            result.push_back(k);
            return result;
            */
        }
    }
}



}



int main() {
int n;
cin>>n;
primesum(n);
return 0;





}
