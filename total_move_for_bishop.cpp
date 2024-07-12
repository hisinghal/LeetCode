#include<bits/stdc++.h>
using namespace std;


int solution(int a, int b, vector<vector<int>> pos) {

    cout<<" a b "<<a<<" "<<b<<endl;
    if(a<1 || a>8 || b<1 || b>8) return 0;
    if(pos[a][b]) return 0;

    pos[a][b] = 1;
    int a1 = pos[a+1][b-1];
    int a2 = pos[a+1][b+1];
    int a3 = pos[a-1][b-1];
    int a4 = pos[a-1][b+1];
    if(!a1 && a+1 < 9 && b-1 > 0) a1 = solution(a+1,b-1,pos);
    if(!a2 && a+1 <9 && b+1 < 9) a2 = solution(a+1,b+1,pos);
    if(!a3 && a-1 >0 && b-1 >0) a3 = solution(a-1,b-1,pos);
    if(!a4 && a-1 > 0 && b+1 <9) a4 = solution(a-1,b+1,pos);
    return ( a1+ a2 + a3 + a4 + 1);
}

int solve(int a, int b) {
    vector<vector<int> > chess(10, vector<int> (10,0));
    return solution(a,b,chess);

}

int main()
{

    int a, b;
    cin>>a>>b;
    cout<<solve(a,b);
    return 0;
}
