#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100000], b[100000];
int main(){
    int tc; cin>>tc;
    for(int t=1; t<=tc; t++){
        int n; cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i]>>b[i];
        }

        ll lcm=a[0]; // if long long is not used, WA is encountered.
        for(int i=1; i<n; i++){
         
            lcm= (lcm*a[i])/(__gcd(lcm, a[i]));
        }

        ll numerator=0;  // if long long is not used, WA is encountered.
        for(int i=0; i<n; i++){
            numerator+=( lcm/a[i])*b[i];
        }


        cout<<"Case "<<t<<": "<<numerator/__gcd(lcm,numerator)<<"/"<<lcm/__gcd(lcm,numerator)<<endl;

    }
}
