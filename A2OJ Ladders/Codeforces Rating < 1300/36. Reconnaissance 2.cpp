#include <bits/stdc++.h>
using namespace std;

main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int a[n+1];
    int mn=INT_MAX, ii=0, jj=0;

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=2; i<=n; i++){
        if(mn> abs(a[i-1]-a[i] )){
            mn= abs(a[i-1]-a[i]);
            ii=i-1;
            jj=i;
        }
    }
    if(mn> abs(a[n]-a[1] )){ii=1; jj=n;}
    cout<<ii<<" "<<jj;
}

