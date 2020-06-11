#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

signed main(){
   FAST;

   int d, n, s=0;
   cin>>d>>n;
   int a[n];
   for(int i=0; i<n; i++) cin>>a[i];
   n--;
   for(int i=0; i<n ; i++){
       s+= d-a[i];
   }
   cout<<s;
}
