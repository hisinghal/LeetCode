#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& bed, int m) {

int result = 0;
int consecutive = 0;
if(bed.size() == 1){
        if(bed[0] == 0 && m == 1) return 1;
        else return 0;
}
int n = bed.size();
for(int i =0;i<bed.size();i++) {
    if(0 == bed[i]) {
            if(i>0 && i<n-1) {
                if(bed[i-1] !=1 && 1 != bed[i+1]) ++consecutive;
            } else if(0 == i) {
                if(1 != bed[i+1]) ++consecutive;
            } else if (n-1 == i) {
                if(1 != bed[i-1]) ++consecutive;
            }
        }
    else {
        float res = consecutive/2.0;
        result += ceil(res);
        consecutive =0;
    }
}
        float res = consecutive/2.0;
        result += ceil(res);
        // consecutive =0;
        if(result >= m) return 1;
        return 0;


}


int main() {
vector<int> arr ;
int n ,m ;
cin>>n>>m;
while(n--) {
    int k;
    cin>>k;
    arr.push_back(k);
}
cout<<canPlaceFlowers(arr,m);

}
