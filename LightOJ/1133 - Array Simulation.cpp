#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;// 001=4  101=5
    for(int i=1; i<=t; i++){
        int n, m;
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        while(m--){
            char c;
            cin>>c;
            if(c=='S'){
                int d; cin>>d;
                for(int i=0; i<n; i++) a[i]+=d;
            }
            else if(c=='M'){
                int d; cin>>d;
                for(int i=0; i<n; i++) a[i]*=d;
            }
            else if(c=='D'){
                int d; cin>>d;
                for(int i=0; i<n; i++) a[i]/=d;
            }
            else if(c=='R') reverse(a, a+n);
            else{
                int p, q; cin>>p>>q;
                swap(a[p],a[q]);
            }
        }
        cout<<"Case "<<i<<":"<<endl;

        for(int i=0; i<n; i++){
            if(i!=0) cout<<" ";
            cout<<a[i];
        }
        cout<<endl;
    }
}


