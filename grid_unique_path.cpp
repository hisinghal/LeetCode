#include<bits/stdc++.h>
using namespace std;


int find(int a, int b, vector<vector<int>> &ar) {
if(a == 0 && b == 0) return 1;
int t1 = 0, t2 =0;
if(a>=1) {
    if(ar[a-1][b]) t1 = ar[a-1][b];
    else t1 = find(a-1,b,ar);
}
if(b>=1) {
    if(ar[a][b-1]) t2 = ar[a][b-1];
    else t2 = find(a,b-1,ar);
}
 ar[a][b] = t1 + t2;

  return ar[a][b];

}

int uniquePaths(int a, int b) {

    vector<vector<int>> ar(a, vector<int>(b,0));
    // reach a-1, b-1; from 0,0
    return find(a-1,b-1,ar);
}

int main() {
int a,b;
cin>>a>>b;
cout<<uniquePaths(a,b);
return 0;

}
