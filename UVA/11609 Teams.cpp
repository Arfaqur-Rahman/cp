#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll Mod = (int) 1e9+7;

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
    int t; cin>>t;

    for(int i=1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        ll n; cin>>n; cout<< (bigMod(2, n-1, Mod ) * n) % Mod <<endl;
    }
}
