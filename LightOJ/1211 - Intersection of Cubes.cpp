#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=1; j<=t; j++){
        int n;
        cin>>n;
        int x1[n],
            y1[n],
            z1[n],
            x2[n],
            y2[n],
            z2[n];
        int mxx=-1e9, mxy=-1e9, mxz=-1e9, mnx=1e9,  mny=1e9,  mnz=1e9;
        for(int i=0; i<n; i++){
            cin>>x1[i]>>y1[i]>>z1[i]>>x2[i]>>y2[i]>>z2[i];
            mxx=max(mxx, x1[i]);
            mnx=min(mnx, x2[i]);
            mxy=max(mxy, y1[i]);
            mny=min(mny, y2[i]);
            mxz=max(mxz, z1[i]);
            mnz=min(mnz, z2[i]);
        }

        cout<<"Case "<<j<<": "<<( (mnx-mxx)*(mny-mxy)*(mnz-mxz) >0 ? (mnx-mxx)*(mny-mxy)*(mnz-mxz) : 0 )<<endl;

    }
}
