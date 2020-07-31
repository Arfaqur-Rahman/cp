#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        long long a, b, l;
        cin>>a>>b>>l;

        long long lcm= a/__gcd(a, b) * b;

        long long div= l/lcm;

        long long G= __gcd( div, l);

        long long c=1;
        if(l%lcm!=0) cout<<"Case "<<i<<": "<<"impossible"<<endl;
        else{
            while(G!=1){
                G= __gcd(l, div);
                l/=G;
                c*=G;
            }
             cout<<"Case "<<i<<": "<<c<<endl;
        }
       
    }
}
