#include<bits/stdc++.h>
using namespace std;
 
bool vis[10000000];
vector<int> a[10000000];
 
void dfs(int node){
	vis[node]=1;
	for(auto child: a[node]) if(vis[child]==0) dfs(child);
}
 
int main() {
	int n, e; cin>>n>>e;
 
	
 
	
	//memset(vis, 0, sizeof vis);
 
	for(int i=1; i<=e; i++){
		int u, v; cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
 
	int c=0;
	for(int i=1; i<=n; i++){
		if(vis[i]==0){
			dfs(i);
			c++;
		}
	}
 
	cout<<c;
 
}
