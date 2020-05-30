#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, b, h, w;
    while(cin>>n>>b>>h>>w){
        int mn= b+1;
        while(h--){
            int p, price;
            cin>>p;
            price = p*n;
            for(int i=0; i<w; i++){
                int x;
                cin>>x;
                if(x>=n && price<=b) mn = min(price, mn);
            }
        }
        if(mn==b+1) cout<<"stay home"<<endl;
        else cout<<mn<<endl;
    }
}
