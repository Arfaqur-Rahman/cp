#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n;
bool vis[1000+1];
int dist[1000+1];

vector<int> a[1000+1];

void dfs(int node, int dis){
    vis[node]=1;
    dist[node]=dis;
    for(auto child: a[node]) if(vis[child]==0) dfs(child, dist[node]+1);
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    cin>>n;



	for(int i=1; i<n; i++){
        int u, v; cin>>u>>v;
        a[v].push_back(u);
        a[u].push_back(v);
	}

	dfs(1, 0);

	int q; cin>>q;

	int mn=INT_MAX, ans;
	while(q--){
        int id; cin>>id;

        if(dist[id]<mn) mn= dist[id], ans=id;
        else if(dist[id]==mn && id<ans) ans=id;

	}

	cout<<ans;
}



