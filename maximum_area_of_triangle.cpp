#include<bits/stdc++.h>
using namespace std;
vector<int> position ( string str, char ch) {
    vector<int> tmp;
    int left = str.find(ch);
    int right = str.rfind(ch);
    if(left != -1 && right != -1) {
        tmp.push_back(left);
        tmp.push_back(right);
    }
    return tmp;

}

int position(int ar[], int size, int first) {
    if(first) {
        for(int i=0; i<size; i++){
            if(ar[i]) return i;
        }
    } else {
        for(int i= size-1; i>=0 ; i--) {
            if(ar[i]) return i;
        }
    }
    return -1;
}

int position (int ar[], int br[], int left, int size) {
    if(left) {
        for(int i=0; i<size; i++)
            if(ar[i] == 1 && br[i] == 1) return i;
        } else {

         for(int i = size-1 ; i>=0; i--) {
                if(ar[i] == 1 && br[i] == 1) return i;
            }
        }
        return -1;
}

int carea (int index, int lindex,int ar[][2], int br[][2]) {

  //  cout<<" arindex and br index" <<ar[lindex][0]<<" "<<ar[lindex][1]<<" "<<br[lindex][0]<<" "<<br[lindex][1]<<endl;

    int height = abs(lindex - index); height++;
    int width = max( abs ( ar[lindex][0]-br[lindex][1] ),
    abs ( ar[lindex][1]-br[lindex][0] ) ); width++;
  //  cout<<"index "<<index<<" lindex "<<lindex<<" height "<<height<<" width "<<width<<endl;
    float area = 0.5*height*width;
    return ceil(area);
}

  int solve(vector<string> &arr) {
    int size_vertical = arr.size();
    int size_horizontal = arr[0].length();
    int rpos[size_horizontal] = {0};
    int gpos[size_horizontal] = {0};
    int bpos[size_horizontal] = {0};


    for(int i =0 ; i<size_vertical; i++) {
        for(int j=0; j<size_horizontal; j++) {
            if(arr[i][j] == 'r') {rpos[j]=1;}
            else if(arr[i][j] == 'g') {gpos[j]=1;}
            else if(arr[i][j] == 'b') {bpos[j]=1;}
        }
    }

    int r[size_horizontal][2];
    int g[size_horizontal][2];
    int b[size_horizontal][2];



    // now verically check this
    for(int i =0 ; i<size_horizontal; i++) {
        string tmp = "";
        for(int j=0; j<size_vertical; j++) {
            tmp  += arr[j][i];
        }

        if(rpos[i]) {
            vector<int> pos = position(tmp, 'r');
            r[i][0] = pos[0];
            r[i][1] = pos[1];
        } else {
            r[i][0] = -1;
            r[i][1] = -1;
        }

        if(gpos[i]) {
            vector<int> pos = position(tmp, 'g');
            g[i][0] = pos[0];
            g[i][1] = pos[1];
        } else {
            g[i][0] = -1;
            g[i][1] = -1;
        }

        if(bpos[i]) {
            vector<int> pos = position(tmp, 'b');
            b[i][0] = pos[0];
            b[i][1] = pos[1];
        } else {
            b[i][0] = -1;
            b[i][1] = -1;
        }
    }


/*
    // verify everything
    for(int i=0; i<size_horizontal; i++) {
            cout<<rpos[i]<<" ";
    }
    cout<<endl;
        for(int i=0; i<size_horizontal; i++) {
            cout<<gpos[i]<<" ";
    }
    cout<<endl;
        for(int i=0; i<size_horizontal; i++) {
            cout<<bpos[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<size_horizontal; i++) {
        cout<<r[i][0]<<" "<<r[i][1]<<endl;
    }
        for(int i=0; i<size_horizontal; i++) {
        cout<<g[i][0]<<" "<<g[i][1]<<endl;
    }
        for(int i=0; i<size_horizontal; i++) {
        cout<<b[i][0]<<" "<<b[i][1]<<endl;
    }

*/



int area = 0;
// start with R apex,
// search first and last R in row.
int firstr, lastr;
int firstb, lastb;
int firstg, lastg;

firstr = position(rpos, size_horizontal, 1);
lastr = position(rpos, size_horizontal, 0);
firstb = position(bpos, size_horizontal, 1);
lastb = position(bpos, size_horizontal, 0);
firstg = position(gpos, size_horizontal, 1);
lastg = position(gpos, size_horizontal, 0);
if(firstr == -1 || lastr == -1 || firstb == -1 || lastb == -1 || firstg == -1 || lastg == -1) {
    return 0;
}

// cout<<firstr<<" "<<lastr<<" "<<firstb<<" "<<lastb<<" "<<firstg<<" "<<lastg<<endl;

// start with R apex now.

int lindex = position(bpos, gpos, 1, size_horizontal);
int rindex = position(bpos, gpos, 0,size_horizontal);
// cout<<"in case of R "<<lindex<<" "<<rindex<<endl;

if(lindex != -1 ) {
    area = max(area, carea(firstr, lindex, b, g));
    area = max(area, carea(lastr, lindex, b, g));
}
// cout<<" area after R "<<area<<endl;

if(rindex != -1 ) {
    area = max(area, carea(firstr, rindex, b, g));
    area = max(area, carea(lastr, rindex, b, g));
}
//cout<<" area after R "<<area<<endl;
// with G now

lindex = position(rpos, bpos, 1 , size_horizontal);
rindex = position(rpos, bpos, 0, size_horizontal);

//cout<<"in case of G "<<lindex<<" "<<rindex<<endl;

if(lindex != -1 ) {
    area = max(area, carea(firstg, lindex, b, r));
    area = max(area, carea(lastg, lindex, b, r));
}
//cout<<" area after G "<<area<<endl;

if(rindex != -1 ) {
    area = max(area, carea(firstg, rindex, b, r));
    area = max(area, carea(lastg, rindex, b, r));
}
//cout<<" area after G "<<area<<endl;
// now with B
lindex = position(rpos, gpos, 1 , size_horizontal);
rindex = position(rpos, gpos, 0, size_horizontal);

//cout<<"in case of B "<<lindex<<" "<<rindex<<endl;

if(lindex != -1 ) {
    area = max(area, carea(firstb, lindex, g, r));
    area = max(area, carea(lastb, lindex, g, r));
}
if(rindex != -1 ) {
    area = max(area, carea(firstb, rindex, g, r));
    area = max(area, carea(lastb, rindex, g, r));
}
//cout<<" area after B "<<area<<endl;
return area;


}




int main() {
    int n;
    cin>>n;
    vector<string> tmp;
    while(n--) {
        string s;
        cin>>s;
        tmp.push_back(s);
    }
    cout<<solve(tmp);


return 0;

}
