#include<bits/stdc++.h>
using namespace std;
#define int long long

bool leapyear(int y){
    if(y%400==0) return true;
    else if( y%4==0 && y%100!=0) return true;
    else return false;
}

signed main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int d, m, y, qy;
        cin>>d>>m>>y>>qy;
        int cnt=0;
        if(leapyear(y) && m==2 && d==29 ){
            for(int j=y+1; j<=qy; j++) if(leapyear(j)) cnt++;
            cout<<"Case "<<i<<": "<<cnt<<endl;
        }else{
            cout<<"Case "<<i<<": "<<qy-y<<endl;
        }
    }
}
