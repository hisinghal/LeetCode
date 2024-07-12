#include<bits/stdc++.h>
using namespace std;
int main() {

int n ;
cin>>n;
vector<int> ar;
while(n--) {


    int t;
    cin>>t;
    ar.push_back(t+1);
}



for(int i=0; i<ar.size(); i++) {
    if(ar[i] > 0) {

        int start = i, current = ar[start]-1, start_content = current, prev = start;
        while(start != current) {
            //    cout<<"start current prev "<<start<< " "<<current<<" "<<prev<<endl;
            ar[prev] = -1*(ar[current]-1);
            prev = current;
            current = ar[current]-1;
        /*for(int j=0; j<ar.size(); j++)
{cout<<ar[j]<<" ";}
cout<<endl;
cout<<"start current prev "<<start<< " "<<current<<" "<<prev<<endl; */
        }
        ar[prev] = -1*start_content;
    }
}

//
for(int i=0; i<ar.size(); i++)
{ar[i] = -1*ar[i];cout<<ar[i]<<" ";}
cout<<endl;
return 0;

}
