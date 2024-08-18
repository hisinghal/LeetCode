#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

#define in cin>>
#define out cout<<
#define rn return

// #define vi vecor
typedef vector<int> vInt;
typedef vector<string> vString;
typedef pair<int, int> pInt;
typedef unordered_map<int, int> iiumap;
typedef unordered_set<int> iuset;
typedef map<int, int> iimap;
typedef set<int> iset;

void vin(vInt & ar, int n) {
	while (n--) {
		int t; in t;
		ar.push_back(t);
	}
}
void vout(vInt & ar) {
	for(auto i: ar) {
		out i<<" ";
	}
	out endl;
}
void vout(vector<vInt>& ar) {
	for(auto i: ar) {
		vout(i);
	}
	out endl;
}

void vout(vInt &ar, int start, int end) {
	for(int i=0; i<=end; i++)
		out ar[i]<<" ";
	out endl;
}

vector<int> nearestHotel(vector<vector<int> > &ar, vector<vector<int> > &br) {
    
    int n = ar.size(), m = ar[0].size();
    vector<vector<int>>visited(n, vector<int>(m,0));
    vector<vector<int>> ans(n,vector<int>(m,INT_MAX)); 
    queue<vector<int>>bfs; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ar[i][j]) {
                bfs.push({i,j});
                ans[i][j] = 0;
                visited[i][j] = 1;
            } 
        }
    }
    int xar[4] = {-1, 0 , 0, 1}; 
    int yar[4] = {0, 1, -1 , 0};
    
    while(!bfs.empty()){
        vector<int> tmp = bfs.front(); 
        int x = tmp[0]; 
        int y = tmp[1]; 
        // int time = tmp[2];
        out" x "<<x<<" y "<<y<<" time "<<endl;
         
       
        for(int i=0; i<4; i++){
            int xnew = x+xar[i]; 
            int ynew = y+yar[i]; 
            if(xnew>=0 && xnew<n && ynew>=0 && ynew<m && !visited[xnew][ynew]) {
            	ans[xnew][ynew] = ans[x][y]+1;
            	visited[xnew][ynew] = 1;
                bfs.push({xnew,ynew});
            }
        }
        bfs.pop();
    }
    vout(ans);
    
    vector<int>answer; 
    int q = br.size(); 
    for(int i =0; i<q; i++){
    	// out" here here it is \n";
        int x = br[i][0]-1; 
        int y = br[i][1]-1; 
        answer.push_back(ans[x][y]);
    }
    return answer;
    
    
    
}



int main() {
	int n, m; 
	in n ; in m; 
	vector<vInt> ar;
	while(n--){
		vector<int>tmp; 
		vin(tmp,m); 
		ar.push_back(tmp);
	}
	int q; in q; int ss; in ss;  
	vector<vInt> br;
	while(q--){
		int x; in x; 
		int y; in y; 
		br.push_back({x,y});
	}
	vInt ans = nearestHotel(ar,br);
	vout(ans); 
	rn 0;
}