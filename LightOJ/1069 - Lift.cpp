#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t; cin>>t;
    for(int i=1; i<=t; i++){
    int n, m;
    cin>>n>>m;
    // to open 3, to close 3, to open 3, to enter 5, to exit 5 ... 3+3+3+5+5=19
    cout<<"Case "<<i<<": "<<abs(n-m)*4+n*4+19<<endl;
    }
}
