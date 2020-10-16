#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a, a+n, greater<int>());

        ll s=0;
        for(int i=0; i<n; i++) if(a[i]-i>0) s+=a[i]-i; else break;

        cout<<s%((int)1e9+7)<<endl;
    }
}
