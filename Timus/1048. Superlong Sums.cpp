#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t; cin>>t;
    int a[t], b[t], c[t], s=0;
    for(int i=0; i<t; i++) cin>>a[i]>>b[i];
    for(int i=t-1; i>=0; i--){
        s += a[i]+b[i];
        c[i]=s%10;
        s/=10;
    }
    for(int i=0; i<t; i++) cout<<c[i];
}
