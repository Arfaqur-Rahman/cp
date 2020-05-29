#include<iostream>
#include<string>
using namespace std;
#define int long long

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t, cs=0, mx, mn;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        mx=max( max(a, b), c );
        mn=min( min(a, b), c );
        //mn=min({a, b, c});
        cout<<"Case "<<++cs<<": "<<a+b+c-mx-mn<<endl;
    }
}
