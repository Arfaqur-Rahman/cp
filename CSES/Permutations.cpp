#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    while(cin>>n){
        if(n!=1 && n<4){cout<<"NO SOLUTION"<<endl; continue;}


        for(int i=2; i<=n; i+=2) cout<<i<<" ";
        for(int i=1; i<=n; i+=2) cout<<i<<" ";
            
        cout<<endl;
    }


}
