#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

//vector<int> v;
int dfs(int n, int &last, int value[], vector<vector<int>>& g, int vis[]){
    vis[n] = 1;
    int mx =-1;
    int nextNode;
    for(auto child: g[n]){
        if(!vis[child]){
           if(value[child]>mx){
                mx = value[child];
                nextNode = child;
           }
        }
    }
    if(mx==-1) return 0;
    //v.push_back(nextNode);
    last = nextNode;
    return mx + dfs(nextNode, last, value, g, vis);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int cs=0;
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        int value[n];
        for(int i=0; i<n; i++) cin>>value[i];
        vector<vector<int>> g(n);
        int vis[n] = {0};
        while(m--){
            int u, v; cin>>u>>v;
            g[u].push_back(v); // a directed edge from u to v.
        }
        int last = -1;
        int sum = dfs(0, last, value, g, vis);
        cout<<"Case "<<++cs<<": "<<sum<<" "<<last<<endl; //v.back() also works 
        //for(auto x: v) cout<<x<<" "; cout<<endl;
        //v.clear();
    }

}
