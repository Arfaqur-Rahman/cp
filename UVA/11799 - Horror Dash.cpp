#include<iostream>
#include<string>
using namespace std;
#define int long long



main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t, cs=0;
    cin>>t;
    while(t--){
        int n, mx=-1000000000;
        cin>>n;
        while(n--){
            int k;
            cin>>k;
            mx=max(mx, k);
        }
        cout<<"Case "<<++cs<<": "<<mx<<endl;
    }
}
