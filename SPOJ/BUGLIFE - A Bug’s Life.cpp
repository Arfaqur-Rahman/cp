#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> a[2000+1];
int vis[2000+1];
int color[2000+1];

bool dfs(int source, int c) {
    vis[source]=1;
    color[source]=c;
    for(auto child: a[source]){
        if(vis[child]==0 && dfs(child, c^1)==false){
            return false;
        }else if(vis[child]==1){
            if(color[child]==color[source]) return false;
        }
    }
    return true;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, m; cin>>n>>m;

        while(m--){
            int u, v; cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        memset(vis, 0, sizeof vis);
        memset(color, 0, sizeof color);

        cout<<"Scenario #"<<tc<<":"<<endl;
        bool b=true;
        for(int i=1; i<=n; i++){
            if(vis[i]==0)
            b=dfs(i, 0);
            if(b==false) break;
        }

        if(b) cout<<"No suspicious bugs found!"<<endl;
        else cout<<"Suspicious bugs found!"<<endl;

        for(int i=1; i<=n; i++) a[i].clear();

    }
}



