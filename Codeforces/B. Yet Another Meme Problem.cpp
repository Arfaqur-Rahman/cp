#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long a,b,c=0;
        cin>>a>>b;
        for(int i=9;i<=b;i=i*10+9){
            c++;
        }
        cout<<a*1LL*c<<'\n';
    }
    return 0;
}
