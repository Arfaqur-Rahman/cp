#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n; cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    
    int m; cin>>m;
    vector<pair<int, int>> u(m);
    for(int i=0; i<m; i++){
        cin>>u[i].first>>u[i].second;
    }
    
    int maxl=-1e9, maxr=-1e9, minl=1e9, minr=1e9;
    for(int i=0; i<n; i++){
        maxl=max(maxl, v[i].first);
        minr=min(minr, v[i].second);
    }

    for(int i=0; i<m; i++){
        maxr=max(maxr, u[i].first);
        minl=min(minl, u[i].second);
    }

    cout<<max(max(maxr-minr, maxl-minl),0);
}
