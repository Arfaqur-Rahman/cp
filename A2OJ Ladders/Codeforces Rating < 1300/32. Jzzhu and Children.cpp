#include <bits/stdc++.h>
using namespace std;

main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n, m;
    cin>>n>>m;

    queue<pair<int, int> > s;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        s.push({i, x});
    }

    int ans=0;
    while(!s.empty()){
        int tps= s.front().second;
        int tpf=s.front().first; 
        
        if(tps>m) s.push({tpf, tps-m});
        
        ans=tpf;
        s.pop();
    }
    cout<<ans;
}

