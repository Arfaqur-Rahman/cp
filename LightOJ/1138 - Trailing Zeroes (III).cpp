#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll trailzeroinfactorial (ll n){
    ll c=0;
    for(ll i=5; i<=n; i*=5) c+= n/i;
    return c;
}

ll whichnumber(ll x){
    ll l=-1, h=(ll)1e18;
    while(h>l+1){
        ll md= l+(h-l)/2;
        if( trailzeroinfactorial(md) < x) l=md;
        else h=md;
    }
    if(h< (ll)1e18 && trailzeroinfactorial(h)==x ) return h;
    else return -1;
}

int main(){
    int tc;
    scanf("%d", &tc);

    for(int t=1; t<=tc; t++){
        ll n;
        scanf("%lld", &n);

        printf("Case %d: ",t);
        if(whichnumber(n)==-1) printf("impossible\n");
        else printf("%lld\n", whichnumber(n));
    }
}
