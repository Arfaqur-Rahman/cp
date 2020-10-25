#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool vis[10000+1];

vector<int> a[10000+1];

void dfs(int node){
    vis[node]=1;
    for(auto child: a[node]) if(vis[child]==0) dfs(child);
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, m; cin>>n>>m;



	for(int i=1; i<=m; i++){
        int u, v; cin>>u>>v;
        a[v].push_back(u);
        a[u].push_back(v);
	}

	int component =0;
	for(int i=1; i<=n; i++){
        if(vis[i]==0) dfs(i), component++;
	}
cout<<component<<endl;
	if(component==1 && n-1==m) cout<<"YES";
	else cout<<"NO";

}



