#include<bits/stdc++.h>
using namespace std;
#define ll long long
// https://forthright48.com/uva-10407-simple-division/

int main()
{
    vector<ll> v;
    ll x;
    while(cin>>x && x ){
        v.push_back(x);
        ll n;
        while(cin>>n && n){
            v.push_back(n);
        }
        ll g=0;
        for(ll i=1; i<v.size(); i++){
            g= __gcd(g, v[i]-v[i-1]);
        }
        if(g<0) g *= -1;
        cout<<g<<endl;
        v.clear();
    }

}
