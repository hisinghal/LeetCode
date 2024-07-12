#include<bits/stdc++.h>
using namespace std;

string nextPalindrome(string s) {


int n = s.size();
if(n<=1) return "11";
int mid = n/2;
if(n%2 == 0) mid--;
int cnt = 0, pos = -1;
int i = 0, j= n-1;
while(i<j && i<mid) {

    int a1 = s[i]-'0';
    int a2 = s[j]-'0';
    if(a1>a2) { pos = j; cnt =0;}
    else if(a1<=a2) {cnt = 1;}
    i++;j--;
}

// cout<<"pos "<<pos<<" cnt "<<cnt<<endl;

if(cnt) {
    // increase mid by 1
    // string c = s[mid];
    int t = int(s[mid]-'0');
    t++;
    // cout<<"t "<<t<<endl;
    if(t>=10) {

        // carry aage add karo.
        t= t-10;
        s.replace(mid,1,to_string(t));
        int p = mid-1, carry =1;
        while(p>=0) {
            if(s[p]-'0' == 9) {s.replace(p,1,to_string(0)); p--;}
            else if(s[p]!='9') {
                int k = int(s[p]-'0');
                k++;
                s.replace(p,1,to_string(k));
               // cout<< " s here 40 line "<<s<<endl;
                carry = 0;
                break;
            }
           // cout<<" i am here 1"<<endl;
        }
        if(carry) { cout<<" i am here 2"<<endl;
                s.insert(0,1,'1');
                if(n%2)
                 {
                     string str = s.substr(0,mid);
                     for(int i=mid; i>=0; i--)
                     str += s[i];
                     str.insert(mid+1,1,s[mid+1]);
                     return str;
                } else {
                      string str = s.substr(0,mid);
                     for(int i=mid; i>=0; i--)
                     str += s[i];
                     str.insert(mid+1,1,s[mid+1]);
                     str.insert(mid+2, 1,s[mid+1]);
                     return str;



                }
        } else {
        // no new addition so just copy

        if(n%2)
                 {
                     string str = s.substr(0,mid);
                   //  cout<<"s "<<s<<endl;
                   //   cout<<"str here "<<str<<endl;
                     for(int i=mid-1; i>=0; i--)
                     str += s[i];
                     str.insert(mid,1,s[mid]);
                     return str;
                } else {
                      string str = s.substr(0,mid);
                   //   cout<<"str "<<str<<endl;
                     for(int i=mid-1; i>=0; i--)
                     str += s[i];
                     str.insert(mid,1,s[mid]);
                     str.insert(mid+1, 1,s[mid]);
                     return str;



                }






        }

    } else {
// cout<<" i am here 3"<<endl;
     s.replace(mid,1,to_string(t));
    // cout<<"s[mid] "<<s[mid]<<endl;
     if(n%2)
                 {
                     string str = s.substr(0,mid);
                   //  cout<<"s "<<s<<endl;
                   //   cout<<"str here "<<str<<endl;
                     for(int i=mid-1; i>=0; i--)
                     str += s[i];
                     str.insert(mid,1,s[mid]);
                     return str;
                } else {
                      string str = s.substr(0,mid);
                  //    cout<<"str "<<str<<endl;
                     for(int i=mid-1; i>=0; i--)
                     str += s[i];
                     str.insert(mid,1,s[mid]);
                     str.insert(mid+1, 1,s[mid]);
                     return str;



                }

    }
// cout<<" i am here 4"<<endl;

} else {
// cout<<" i am here 5"<<endl;
if(pos != -1) {
    int jtr=0;
   for(int itr=n-1; itr>=pos; itr--) {
    s[itr] = s[jtr];
    jtr++;
   }

    return s;


}

}







}





int main() {

string s;
cin>>s;
cout<<nextPalindrome(s);
return 0;
}
