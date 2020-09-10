#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    while(cin>>n){
        cout<<n;
        while(n!=1){
            if(n & 1){
                n*=3;
                n++;
            }else {
                n/=2;
            }
            cout<<" "<<n;
        }
        cout<<endl;
    }


}
