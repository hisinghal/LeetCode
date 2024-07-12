#include <bits/stdc++.h>
using namespace std;
int makeNumber(vector<int> a, int endd) {
int num = 0 ,pow = 1;
for(int i=0; i<=endd; i++) {
    num += a[i]*pow;
    pow = pow*10;
}
return num;

}
bool customSort(const int& a1, const int& b1) {
  int a = a1, b = b1;
    if(a == b) return 1;
    if(a == 0) return 0;
    if(b == 0) return 1;
cout<< "a b "<<a<<" "<<b<<endl;
vector<int>a_v;
vector<int>b_v;
while(a) {
    int t;
    t = a%10;
    a = a/10;
    a_v.push_back(t);
}
while(b){
    int t;
    t = b%10;
    b = b/10;
    b_v.push_back(t);
}
// int size = max(a_v.size(), b_v.size());


int i = a_v.size();
int j = b_v.size();
--i;--j;
 cout<<" i j "<<i<<" "<<j<<endl;
while(i>= 0 || j>=0) {
        if(i == 0 && j == 0) {return (a_v[0]>=b_v[0]);}
    if(i<0 || j<0) {
        if(i<0) {
            // a got over
            int newB = makeNumber(b_v, j);
            cout<<"newB a1 "<<newB<<" "<<a1<<endl;
            return customSort(a1,newB);
        } else {
            cout<<"b got over"<<a_v[i]<<" "<<a_v[i+1]<<endl;
          int newA = makeNumber(a_v, i);
          cout<<"newA b "<<newA<<" "<<b<<endl;
            return customSort(newA, b1);

        }

    }
    if(a_v[i]>b_v[j]) return 1;
    else if(a_v[i]<b_v[j]) return 0;
    i--;
    j--;
}

}


int main(){

int n;
cin>>n;
vector<int> arr;
while(n--) {
    int t;
    cin>>t;
    arr.push_back(t);
}

sort(arr.begin(), arr.end(), customSort);
    string str = "";
  for(int i=0; i<arr.size(); i++) {
     //cout<<arr[i]<<" ";
     str += to_string(arr[i]);
  }
  //cout<<endl;
    cout<<str;

return 0;
}

