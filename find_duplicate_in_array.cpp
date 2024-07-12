#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
vector<int> arr;
while(n--) {
    int t;
    cin>>t;
    arr.push_back(t);
}

    int size = arr.size();
    vector<int> count(size+1, 0);
    for(int i=0; i<size; i++){
       int k =  ++count[arr[i]] ;
        if(k > 1) return arr[i];
        // count[arr[i]]++;
    }
    return -1;




}
