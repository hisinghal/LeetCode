#include<bits/stdc++.h>
using namespace std;
bool canBeIncreasing(vector<int>& arr) {
    int size_arr = arr.size();
    int cnt = 0;
    int previous = arr[0];
    for(int i=1; i<size_arr;) {
        if(arr[i]> previous) {previous = arr[i]; i++;}
        else {
              //  cout<<cnt<<" "<<i<<" "<<previous<<" "<<arr[i]<<endl;
            if(0 == cnt) {
        if(i == size_arr-1) return 1;
        // if not last number then
        int next_number = arr[i+1];
        // check if remove this number works
        if(next_number > previous) {previous = arr[i+1]; i += 2; cnt++;  }
        // check if removing previous number works
        else if ( 1 == i) {cnt ++; previous = arr[i];i++;}
        else if(arr[i] > arr[i-2]) {
                cnt++;
        previous = arr[i];i++;
        }
        else return 0;


        }
        else return 0;
        }
    }
    return 1;
}

int main() {
vector<int> arr ;
int n ; cin>>n;
while(n--) {
    int k;
    cin>>k;
    arr.push_back(k);
}
cout<<canBeIncreasing(arr);
return 0;
}
