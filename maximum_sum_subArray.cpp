#include<bits/stdc++.h>
using namespace std;
vector<int> maxset(vector<int> &arr) {
    int siz = arr.size();
    int c_sum = 0, c_length = 0, c_start_index = -1;
    int sum = 0, length = 0, start_index = -1;
    for(int i = 0; i<siz ; i++) {
        if(arr[i]>=0){ //cout<<"i jjj "<<i<<endl;
            if(c_length == 0) c_start_index = i;
            c_length++; c_sum += arr[i];
        } else if(arr[i] < 0) { //cout<<"i "<<i<<endl;
        if(c_sum > sum ) {
                sum = c_sum;
                start_index = c_start_index;
                length = c_length;
                c_length = 0;
                c_sum =0;
         }
        else if (c_sum == sum && length < c_length) {
        sum = c_sum;
        start_index = c_start_index;
        length = c_length;
        c_length = 0;
        c_sum =0;
        }
        c_sum = 0; c_length = 0;
    }
}
        if(c_sum > sum ) {
                //cout<<"jjjjjdidi "<<endl;
                sum = c_sum;
                start_index = c_start_index;
                length = c_length;
         }
        else if (c_sum == sum && length < c_length) {
        sum = c_sum;
        start_index = c_start_index;
        length = c_length;
        }
       // cout<<"here it is "<<sum<<" "<<start_index<<" "<<length<<endl;
        vector<int> tmp ;
        for(int i =0 ; i<length; i++) {
            tmp.push_back(arr[start_index + i]);
        }
return tmp;



}

int main() {
int n;
cin>>n;
vector<int> arr;
while(n--) {
    int k;
    cin>>k;
    arr.push_back(k);
}

vector<int> tmp = maxset(arr);
for(int i=0; i<tmp.size(); i++)
    cout<<tmp[i]<<" ";
return 0;

}
