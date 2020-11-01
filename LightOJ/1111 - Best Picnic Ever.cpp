#include<bits/stdc++.h>
using namespace std;

const int N=1000+1;
int visited[N], visit_sum[N];
vector<int> a[N];

void dfs(int node){
    visited[node]=1;
    visit_sum[node]++; //cout<<node<<"-"<<visit_sum[node]<<endl;
    for(auto child: a[node]){
        if(!visited[child]) dfs(child);
    }
}

int main(){

    int tc; cin>>tc;
    for(int t=1; t<=tc; t++){
        int k, n, m; cin>>k>>n>>m;

        int city[k];
        for(int i=0; i<k; i++) cin>>city[i];


        for(int i=0; i<m; i++){
            int u, v; cin>>u>>v;
            a[u].push_back(v);
        }

        for(int i=0; i<k; i++){
            memset(visited, 0, sizeof visited);
            dfs(city[i]);
        }

        int cnt=0;
        for(int i=1; i<=n; i++){
            //cout<<visit_sum[i]<<"YO"<<endl;
            if( visit_sum[i]==k ) cnt++;
        }

        cout<<"Case "<<t<<": "<<cnt<<endl;

        for(int i=0; i<=n; i++) a[i].clear();
        memset(visited, 0, sizeof visited);
        memset(visit_sum, 0, sizeof visit_sum);

    }
}
