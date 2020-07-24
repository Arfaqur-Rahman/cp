#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


ll bigMod(ll base, ll exp, ll mod) { // log(exp)
   if(exp == 0) return 1 % mod;
   if(exp % 2 == 1) {
       return base * bigMod(base, exp - 1, mod) % mod;
   } else {
       ll half = bigMod(base, exp / 2, mod);
       return half * half % mod;
   }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll m;
        cin>>m;
        int k;
        cin>>k;
        ll s=0;
        while(k--){
            ll x, y;
            cin>>x>>y;
            s+= bigMod(x,y,m);
        }
        cout<<s%m<<endl;
    }

}
