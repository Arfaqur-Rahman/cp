#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

signed main(){
   FAST;
   int n, m;
   cin>>n>>m;
   int a[m];
   for(int i=0; i<m; i++) cin>>a[i];
   int s=a[0]-1;
   for(int i=1; i<m; i++){
        if(a[i-1]<= a[i] ) s+= a[i]-a[i-1];
        else s+= (n-a[i-1])+1+(a[i]-1); 
   }
   cout<<s;
}
