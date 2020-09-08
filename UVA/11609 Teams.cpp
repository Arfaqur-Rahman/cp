#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://f0rth3r3c0rd.wordpress.com/2011/09/10/uva-11609-teams/
// https://tausiq.wordpress.com/2011/03/29/uva-11609-teams/

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
