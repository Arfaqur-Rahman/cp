#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t; cin>>t;
    for(int i=1; i<=t; i++){
    double r, n, sinx;
    cin>>r>>n;
    sinx=sin(acos(-1)/n);
    cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<< r*sinx/(1+sinx) <<endl;
    }
}
