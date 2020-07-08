#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        int n, k;
        cin>>n>>k;
        long double logValue= k*log10(n);
        logValue = logValue - (int) logValue;
        long double ans = pow(10, logValue);
        ans*= 100;
        cout<<(int)ans;

        cout<<"...";

        printf("%03d\n", bigMod(n, k, 1000));
    }
}
