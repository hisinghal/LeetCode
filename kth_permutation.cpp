#include<bits/stdc++.h>
using namespace std;
#define ll long long


void factorial(vector<ll> &ar) {
ll  cnt = 1; ar.push_back(cnt);
for(int i=1; i<=19; i++)
{
    cnt = cnt*i;
    ar.push_back(cnt);
}

}

void findpermutation(vector<int> &ar, int index, ll rank, int swap_index, vector<ll> &fact) {
    int size = ar.size();
    // cout<<" here is call data "<<ar.size()<<" "<<index<<" "<<rank<<" "<<swap_index<<endl;
    size = size-index;
    if(size<=1) return;
    // fix first number ;
    // cout<<" size "<<size<<endl;
    ll c_rank = fact[size-1];

   // cout<<" c_rank "<<c_rank<<endl;
    if(c_rank<rank) {

        swap(ar[index], ar[swap_index]);
        rank = rank-c_rank;
        swap_index++;
      //  cout<<" rank swap_index "<<rank<<" "<<swap_index<<" "<<endl;
        return findpermutation(ar, index, rank, swap_index, fact);
    }

    index++;
    // rank = c_rank-rank;
    swap_index = index+1;
   // cout<<" here rank swap_index "<<rank<<" "<<swap_index<<" "<<endl;
    return findpermutation(ar, index, rank, swap_index, fact);
}



vector<int> findPerm(int a, long b) {
    // save lexicographically numbers in a veectors.


    vector<int> lexi_string;
    for(int i=1; i<=a; i++) {
        lexi_string.push_back(i);
    }
    sort(lexi_string.begin(), lexi_string.end());

    vector<ll> fact;
    factorial(fact);

    // find out how many index.

    int index = 0;
    for(int i=0; i<=19; i++) {
        if(fact[i]>= b) {index = i; break;}
    }

  //  cout<<"index here "<<index<<endl;


    index = a-index;
 // cout<<"index and here "<<index<<endl;
    findpermutation(lexi_string,index,b,index+1,fact);

   /* vector<int>answer;
    for(int i=0; i<lexi_string.size(); i++)
        answer.push_back(stoi(lexi_string[i])); */
    return lexi_string;
}






int main()
{
int a ; ll b;
cin>>a>>b;
vector<int>ans = findPerm(a,b);
for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
cout<<endl;
return 0;

}
