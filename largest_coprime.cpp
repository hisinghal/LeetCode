#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b) {
    return (b == 0 ?a : gcd(b,a%b));
}



int cpFact(int a, int b) {
    int c = gcd(a,b);
    c = a/c;
    while(1) {
        int d = gcd(c,b);
        c = c/d;
        if(d == 1) break;
    }

    return c;
}


int main() {
int a, b;
cin>>a>>b;

cout<<cpFact(a,b);

return 0;
}
