#include<bits/stdc++.h>
using namespace std;

void bit(int a, vector<int> & ar) {
    int i=0;
    while(a) {
     int t = a%2;
     a = a/2;
     ar[i] = t;
     i++;
    }

}



int addNumbers(int a, int b) {
    vector<int> ar(33, 0);
    vector<int> br(33, 0);
    bit(a, ar);
    bit(b, br);

    for(int i=0; i<32; i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
        for(int i=0; i<32; i++) {
        cout<<br[i]<<" ";
    }
     cout<<endl;

    int carry = 0;
    for(int i=0; i<32; i++)
    {
        if(ar[i] == 0 && br[i] == 0) {ar[i] = carry; carry = 0;}
        else if(ar[i] == 1 && br[i] == 1) {ar[i] = carry; carry = 1;}
        else if((ar[i] == 0 && br[i] == 1) || (ar[i] == 1 && br[i] == 0)) {
            if(carry) {ar[i] = 0; carry = 1;}
            else {ar[i] = 1; carry = 0;}
        }
    }
    if (carry) ar.push_back(carry);

        for(int i=0; i<32; i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    // convert to number;
    int pow = 1; int num = 0;
    for(int i=0; i<ar.size(); i++) {
        if(ar[i]) {
            num += pow;
        }
        pow = 2*pow;
    }

    return num;
}


int main() {
int a,b;
cin>>a>>b;

cout<<addNumbers(a,b);
return 0;

}
