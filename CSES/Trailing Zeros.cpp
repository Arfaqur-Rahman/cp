#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll zero(ll n){
    ll c=0;
    for(ll i=5; i<=n; i*=5) c+=n/i;
    return c;
}

int main(){
    int n;
    cin>>n;

    ll z=zero(n);

    cout<<z<<endl;


}
