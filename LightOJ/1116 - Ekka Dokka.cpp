#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        long long n;
        cin>>n;
        cout<<"Case "<<i<<": ";
        if(n & 1){
            cout<<"Impossible"<<endl;
            continue;
        }
        for(long long j=2; j<=n; j*=2 ){
            long long odd= n/j;
            if(odd & 1){
                cout<<odd <<" "<<j<<endl;
                break;
            }
        }
    }
}


