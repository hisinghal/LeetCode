 #include<bits/stdc++.h>
 using namespace std;


 int kthsmallest(const vector<int> &ar, int b) {
    int n = ar.size();
    int maxx = INT_MIN, minn = INT_MAX;
    for(int i=0; i<n; i++) {
        maxx = max(maxx, ar[i]);
        minn = min(minn, ar[i]);
    }

   // int start = 0, end = n-1;
    while(1) {
      //  cout<<"maxx minn "<<maxx<<" "<<minn<<endl;
        int gap = (maxx-minn)/100;
     //   cout<<"gap "<<gap<<endl;
        if(gap<=100) break;
        vector<int>count(105,0);
         for(int i=0; i<n; i++)
         {
            // cout<<"i am in loop\n";
             if(ar[i]<=maxx && ar[i]>= minn)
             {
                 int t = (ar[i]-minn)/gap;
                 // if(ar[i]%gap == 0) t--;
                 ++count[t];
                 // cout<<" t ar[i] count[t] "<<" "<<t<<" "<<ar[i]<<" "<<count[t]<<endl;
             }
         }

         int cnt = 0, index = -1;

         for(int i=0; i<105; i++)
         {
            cnt += count[i];
            if(cnt >= b) {
                index = i;
                cnt -= count[i];
                break;
            }
         }

         //
         minn = minn + index*gap;

         maxx = minn + gap;

         b = b - cnt;

         // cout<<" index gap minn maxx and b last line m "<<index<<" "<<gap<<" "<<minn<<" "<<maxx<<" "<<b<<endl;
    }

    // gap is less than 100 now.
    // cout<<"i am here\n";
    vector<int> br ;
    for(int i=0; i<n; i++){
        if(ar[i]<=maxx && ar[i]>= minn) br.push_back(ar[i]);
    }
    sort(br.begin(), br.end());
    // cout<<" size b-1 "<<b-1<<" "<<br.size()<<" "<<endl;
    //if(b-1 < br.size())
    return br[b-1];

}

 int main() {
     int n ;
     cin>>n;
     vector<int> ar;
     while(n--) {

        int t;
        cin>>t;
        ar.push_back(t);
     }
     int b ;
     cin>>b;
    cout<<kthsmallest(ar,b)<<endl;
    return 0;
 }
