#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[(int)2e5+1 ];
ll pref[(int) 2e5+1];

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin>>n;

    for(int i=n-1; i>=0; i--) cin>>a[i];

    pref[0]=a[0];
    for(int i=1; i<n; i++) pref[i]+= pref[i-1]+a[i];

    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        if(x==1){
            int l, r; cin>>l>>r;
            if(n!=r)cout<<pref[n-l]-pref[n-r-1]<<endl;
            else cout<<pref[n-l]<<endl;
        }else{
            int x; cin>>x;
            a[n]=x;
            pref[n]= pref[n-1] + x;
            n++;
        }
    }
}
