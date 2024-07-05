#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
 int cnt =0;
 vector<vector<int>>result(n,vector<int> (n,0));
 // cout<<"i am here"<<endl;
/*
for(int i=0; i<result.size(); i++) {
    for(int j=0; j<result[i].size(); j++) {
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
*/
 // initialise
int num = 1; int row = 0, col = 0;
 while(cnt != n) {
    // top row

    row = cnt; col = cnt;


    for(int i=col; i<n-cnt; i++) {
        result[row][i] = num;
        num++;
    }
/* cout<<" i am now here heereee"<<endl;

for(int i=0; i<result.size(); i++) {
    for(int j=0; j<result[i].size(); j++) {
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
*/

    col = n-cnt-1;

    // cout<<"col "<<col<<" row "<<row<<endl;
    // side column

    for(int j= row+1; j<n-cnt; j++) {
        result[j][col] = num;
        num++;
    }
    row = n - cnt-1;

   /* cout<<" i am now here side"<<endl;

for(int i=0; i<result.size(); i++) {
    for(int j=0; j<result[i].size(); j++) {
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"col "<<col<<" row "<<row<<endl;
*/
    // bottom
    for(int i = col-1; i>=cnt; i--) {
        result[row][i] = num;
        num++;
    }
    col = cnt;

 /*   cout<<" i am now here bottom"<<endl;

for(int i=0; i<result.size(); i++) {
    for(int j=0; j<result[i].size(); j++) {
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"col "<<col<<" row "<<row<<endl;
*/
    // left  side
    for(int j = row-1; j>=cnt+1; j--) {
        result[j][col]  = num;
        num++;
    }

    cnt++;

  /*  cout<<" i am now left"<<endl;
    cout<<"col "<<col<<" row "<<row<<endl;

for(int i=0; i<result.size(); i++) {
    for(int j=0; j<result[i].size(); j++) {
        cout<<result[i][j]<<" ";
    }
    cout<<endl;


}
 // cout<<"cnt "<<cnt<<endl;
 }
*/
}
return result;


}

int main() {


int n ;
cin>>n;
vector<vector<int>> result = generateMatrix(n);
for(int i=0; i<result.size(); i++) {
    for(int j=0; j<result[i].size(); j++) {
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}



}
