#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
	ios::sync_with_stdio(false);
    int a, b, c, d; cin>>a>>b>>c>>d;
    while(true){
        c-=b;
        if(c<=0){cout<<"Yes"; return 0;}
        a-=d;
        if(a<=0){cout<<"No"; return 0;}
    }
}
