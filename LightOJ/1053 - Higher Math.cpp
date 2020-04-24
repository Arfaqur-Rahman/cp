#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t; cin>>t;
    for(int i=1; i<=t; i++){
    int n, m, p;
    cin>>n>>m>>p;
    cout<<"Case "<<i<<": "<<  ( n*n+m*m == p*p ? "yes": ( n*n+p*p == m*m ? "yes": ( m*m +p*p == n*n ? "yes": "no"  )   )   )  <<endl;
    }
}
