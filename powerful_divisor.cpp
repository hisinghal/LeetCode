#include<bits/stdc++.h>
using namespace std;

 vector<int> powerfulDivisors(vector<int> &ar) {
    // find all prime numbers, there power and use formula.
    int max = 0;
    for(int i=0; i<ar.size(); i++)
    if(max < ar[i]) max = ar[i];

    set<int>powerOf2;
    powerOf2.insert(1);
    int sum = 1;

    for(int i=1; i<=17; i++) {
        sum = sum*2;
        powerOf2.insert(sum);
    }
    cout<<endl;


    vector<int> primes(max+1, 1);
    vector<int> listPrimes;
    for(int i=2; i*i <= max; i++) {
        if(primes[i]) {
            for(int j=i; i*j<=max; j++)
            primes[i*j] = 0;
        }
    }

    for(int i=2; i<=max; i++)
        if(primes[i]) listPrimes.push_back(i);


    vector<int> divisor(max+1, 0);
    divisor[1] = 1; int count = 1;

    for(int i=2; i<=max; i++) {

        sum = 1; int k = i;
        for(int j = 0; j<listPrimes.size(); j++) {

            int power = 0; bool isDivisible = false;
            while(k%listPrimes[j] == 0) {
                // cout<<"i in while loop "<<i<<endl;
                k = k/listPrimes[j];
                power++;
                isDivisible = true;
            }
            if(isDivisible) {
                    power++;
            sum *= power;
            }

        }
       // cout<<" sum "<<sum<<endl;
        if(powerOf2.find(sum) != powerOf2.end()) {
            count++;
            }
            divisor[i] = count;
    }

    vector<int>result;
    for(int i=0; i<ar.size(); i++) {
       result.push_back(divisor[ar[i]]);
    }
    return result;
}




int main() {

int n;
cin>>n;
vector<int> tmp;
while(n--) {
    int k ;
    cin>>k;
    tmp.push_back(k);
}

vector<int> result = powerfulDivisors(tmp);
for(int i=0;i<result.size(); i++) {
    cout<<result[i]<<" ";
}
cout<<endl;
return 0;

}
