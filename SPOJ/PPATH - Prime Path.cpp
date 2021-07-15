#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define vi vector<int>
//#define var(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define all(x) x.begin(), x.end()

#define log(args...){ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cout<<endl;}


void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << ", ";
	err(++it, args...);
}

const int MXN=1e5;
int dis[MXN+5];
vector<int> g[MXN+5];
bool vis[MXN+5];

bool isPrime[MXN+1];

vector<int> pr;
void sieve(){
    for(int i=0; i<=MXN; i++) isPrime[i]=true;

    isPrime[0]=isPrime[1]=false;
    for(int i=2; i*i<=MXN; i++){
        if(isPrime[i]==true){
            for(int j=i*i; j<=MXN; j+=i) isPrime[j]=false;
        }
    }
}

bool isValid(int a, int b){
    int c=0;
    while(a>0){
        if( (a%10) != (b%10) ) c++;
        a/=10;
        b/=10;
    }

    return c==1;
}



void bfs(int node){


    vis[node]=1;
    dis[node]=0;

    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int top=q.front();
        q.pop();
        for(auto x: g[top]){
            if(vis[x]==0){
                vis[x]=1;
                q.push(x);
                dis[x]= dis[top]+1;
            }
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    sieve();

    for(int i=1000; i<=9999; i++) if( isPrime[i] ) pr.push_back(i);

    for(int i=0; i<pr.size(); i++){
        for(int j=i+1; j<pr.size(); j++){
            if( isValid(pr[i], pr[j])) {
                g[pr[i]].push_back(pr[j]);
                g[pr[j]].push_back(pr[i]);
            }
        }
    }


    int t; cin>>t;
    while(t--){
        int a, b; cin>>a>>b;
        for(int i=1000; i<=9999; i++) {dis[i]=-1; vis[i]=0;}
        bfs(a);

        if(dis[b]==-1) cout<<"Impossible"<<endl;
        else cout<<dis[b]<<endl;
    }



}
