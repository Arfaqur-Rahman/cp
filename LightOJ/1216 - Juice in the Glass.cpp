#include<bits/stdc++.h>
using namespace std;
#define ll long long

// http://light-online-judge.blogspot.com/2012/05/1216-juice-in-glass.html

int main(){
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int r1, r2, h, p;
        cin>>r1>>r2>>h>>p;

        double R= r2+(r1-r2)* double(p)/h;
        cout<<fixed<<setprecision(9)<<"Case "<<tc<<": "<< 1/3.0*acos(-1)*p*( r2*r2 + r2*R + R*R ) <<endl;
    }
    return 0;
}
