#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    while(cin>>n){
        ll s=n*(n+1)/2;

        n--;
        while(n--){
            int x;
            cin>>x;
            s-=x;
        }
        cout<<s<<endl;
    }


}
