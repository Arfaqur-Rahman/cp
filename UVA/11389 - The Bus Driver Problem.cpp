#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

signed main(){
   FAST;
   int n, d, r;
   while(cin>>n>>d>>r && n && d && r){
        int m[n], e[n];
       for(int i=0; i<n; i++) cin>>m[i];
       for(int i=0; i<n; i++) cin>>e[i];
       sort(m, m+n);
       sort(e, e+n, greater<int>());
       int s=0;
       for(int i=0; i<n; i++) if(m[i]+e[i]>d) s+= (m[i]+e[i]-d)*r;
       cout<<s<<endl;
   }

}

