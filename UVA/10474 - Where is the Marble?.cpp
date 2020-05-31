#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, q, cs=0;
    while(cin>>n>>q && n && q){
        cs++;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a, a+n);
        cout<<"CASE# "<<cs<<":"<<endl;
        while(q--){
            int x;
            bool b= true;
            cin>>x;
            for(int i=0; i<n; i++){
                if(x==a[i]){
                    cout<<x<<" found at "<<i+1<<endl;
                    b=false;
                    break;
                }
            }
            if(b) cout<<x<<" not found"<<endl;
        }
    }
}
