#include<bits/stdc++.h>
using namespace std;
bool compare(const string a, const string b) {

return (a<b);
}
int main() {


vector<string> ar;
ar.push_back("alice");
ar.push_back("bobby");
ar.push_back("baaa");
ar.push_back("chch");
ar.push_back("ere");
ar.push_back("asd");

sort(ar.begin(), ar.end(), compare);

for(int i=0; i<ar.size(); i++)
    cout<<ar[i]<<" ";
cout<<endl;

}
