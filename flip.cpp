#include<bits/stdc++.h>
using namespace std;
vector<int> flip(string arr) {

int siz = arr.length();
int sum = INT_MIN, csum = 0, start = -1, endd = -1, cstart=0;
for(int i=0; i<siz; i++) {
        int t =1;
if(arr[i] == '1') t = -1;
csum += t;
if(csum > sum && csum >0) {sum = csum; endd = i; start = cstart;}
if(csum < 0) {csum = 0; cstart = i+1;}
}
vector<int> tmp;
if(sum > 0)
{tmp.push_back(start+1);tmp.push_back(endd+1);}
return tmp;


}




int main()
{

    string tmp;
    cin>>tmp;
    vector<int> result = flip(tmp);
    for(int i =0 ; i<result.size(); i++)
        cout<<result[i]<<" ";
    cout<<endl;
return 0;

}
