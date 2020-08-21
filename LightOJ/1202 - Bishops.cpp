#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int r1, c1, r2, c2;
        cin>>r1>>c1>>r2>>c2;

        if( (r1+r2)%2==(c1+c2)%2 ){
            if(abs(r1-r2)==abs(c1-c2)) cout<<"Case "<<tc<<": "<<1<<endl;
            else cout<<"Case "<<tc<<": "<<2<<endl;
        }
        else{
            cout<<"Case "<<tc<<": "<<"impossible"<<endl;
        }

    }
    return 0;
}
