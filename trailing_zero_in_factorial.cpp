#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n) {

    vector<long int>powerof2;
    vector<long int> powerof5;

    if(n<5) return 0;
//cout<<"hrere 3"<<endl;
    int cnt = 1;
    for(int i=1; i<33; i++) {
        cnt *= 2;
        powerof2.push_back(cnt);
    }

    cnt = 1;
//cout<<"hrere 1"<<endl;
    for(int i=1; i<10; i++) {
    cnt *= 5;
    powerof5.push_back(cnt);
    }
//cout<<"hrere 2"<<endl;

    long int countof2 = 0;
   // cout<<"size of 2 "<<powerof2.size()<<endl;
    for(int i=0;i<powerof2.size(); i++){
        long int t = n/powerof2[i];
        if(!t) break;
        countof2 += t;
      //  cout<<"i am here line 31 "<<t<<endl;
    }
//cout<<"hrere 4"<<endl;
    long int countof5 = 0;

    for(int i=0;i<powerof5.size(); i++) {

        long int t = n/powerof5[i];
        if(!t) break;
        countof5 += t;
       // cout<<"i am here line 40 "<<t<<endl;
    }
//cout<<"hrere 5"<<endl;
    return min(countof2, countof5);
}




int main() {

int n ;
cin>>n;
cout<<trailingZeroes(n);
return 0;


}
