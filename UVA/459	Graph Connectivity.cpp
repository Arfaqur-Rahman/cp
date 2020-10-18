#include<bits/stdc++.h>
using namespace std;

vector<int> graph[27];
bool visited[27];

void dfs(int node) {

    visited[node] = true;
    for (int i = 0; i < graph[node].size(); i++) {
        int child = graph[node][i];

        if (!visited[child]) {

            dfs(child);
        }
    }

}

int main(){

    int t; cin>>t; getchar(); // works fine without this getchar()
    while(t--){
        char c; cin>>c;
        int n= c-'A'+1;
        //cout<<(int)c;


        string s; getchar();
        while(getline(cin, s)){

            if(s.length()==0) break;
            int uu=s[0]-'A'+1;
            int vv=s[1]-'A'+1;
            graph[uu].push_back(vv);
            graph[vv].push_back(uu);
        }




        int cnt=0;
        for(int i=1; i<=n; i++) {
            if(visited[i]) continue;
            else {
                cnt++;
                dfs(i);
            }
        }

        cout<<cnt<<endl;
        memset(visited, 0 ,sizeof(visited));
        for(int i=0 ; i<=27 ; i++) graph[i].clear();
        if(t!=0) cout<<endl;
    }
}
