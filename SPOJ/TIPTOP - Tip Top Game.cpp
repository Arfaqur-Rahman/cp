#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case "<<i<<": ";
        ll n; cin>>n;
        ll N= (ll) sqrt(n);
        cout<<( (unsigned long long) N*N==n ? "Yes" : "No")<<endl;
    }
}
