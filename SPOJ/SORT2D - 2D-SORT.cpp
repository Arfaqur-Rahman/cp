 #include<bits/stdc++.h>
 using namespace std;

#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)


bool cmp( pair<int, int> a, pair<int, int> b){
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}


int main(){
    int t;
    sf(t);
    while(t--){
        int n;
        sf(n);
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            int x, y;
            sff(x,y);
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(), v.end(),cmp);
        for(int i=0; i<n; i++){
            pf("%d %d\n",v[i].first, v[i].second);
        }
    }
 }
