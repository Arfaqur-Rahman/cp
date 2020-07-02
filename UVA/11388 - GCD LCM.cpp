#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int gcd, lcm;
        cin>>gcd>>lcm;
        if(lcm%gcd!=0) cout<<-1<<endl;
        else cout<<__gcd(gcd, lcm)<<" "<<gcd*lcm/__gcd(gcd, lcm)<<endl;
    }
}
