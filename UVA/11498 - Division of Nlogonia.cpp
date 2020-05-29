#include<iostream>
#include<string>
using namespace std;
#define int long long

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    while(cin>>n && n){
        int x, y, u , v;
        cin>>x>>y;
        //n--;
        while(n--){
             cin>>u>>v;
             if(x==u || y==v) cout<<"divisa"<<endl;
             else if(u>x){
                if(v>y) cout<<"NE"<<endl;
                else cout<<"SE"<<endl;
             }else if(u<x){
                if(v>y) cout<<"NO"<<endl;
                else cout<<"SO"<<endl;
             }
        }

    }
}
