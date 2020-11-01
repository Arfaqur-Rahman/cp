#include<bits/stdc++.h>
using namespace std;

const int N =  20000+2;
vector <int> graph[ N ];
int vis[ N ];
int color[N];
int vampire, lykan;

void bfs(int source) {

    memset(color, 0, sizeof(color));

    queue <int> q;
    vis[source] = 1; color[source]=1; vampire++;
    q.push(source);
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (int i = 0; i < graph[f].size(); i++) {
            int child = graph[f][i];
            if (vis[child] == -1) {
                vis[child] = 1;
                if(color[f]==0) color[child]=1, vampire++;
                else if(color[f]==1) color[child]=0, lykan++;
                q.push(child);
            }
            //else if(vis[child]==1) if(color[f]==color[child]) return false;

        }
    }

}



int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int tc; scanf("%d", &tc);
    for(int t=1; t<=tc; t++){
        int n; scanf("%d", &n);

        for(int i=0; i<n; i++){
            int u, v; scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        memset(vis, -1, sizeof(vis));

        int res=0;
        for(int i=1; i<N; i++){
            vampire=0, lykan=0;
            if(!graph[i].empty( ) && vis[i]==-1){
                bfs(i);
                res+= max(vampire, lykan); //cout<<vampire<< "  "<<lykan<<endl;
            }
        }

        cout<<"Case "<<t<<": "<<res<<endl;

        for(int i=0; i<N; i++) graph[i].clear();


    }
}
