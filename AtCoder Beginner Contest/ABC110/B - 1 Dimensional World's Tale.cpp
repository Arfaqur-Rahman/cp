#include<bits/stdc++.h>
using namespace std;
main(void){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int a[n], b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b,b+m);
    for(int z=x+1;z<=y;z++){
        if(a[n-1]<z && b[0]>=z){
            cout<<"No War";
            return 0;
        }
    }
    cout<<"War";
}
