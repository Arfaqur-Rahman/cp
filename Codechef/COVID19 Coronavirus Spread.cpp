#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


signed main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1], s=0, mn=1000000000, mx=-1000000000;
        for(int i=0; i<n; i++) cin>>a[i];
        a[n]=13; // it is given that the highest value of a[i] is 10. I chose 13 because 12-10>2
        for(int j=1; j<=n; j++){
            if(a[j]-a[j-1]<=2){
                    s++;
            }
            else{ // if a[n]=13 is not added, when all values of a[j]-a[j-1]<=2, mx & mn never get updated. So a[n]=13 forces the else condition to execute at least once!
                mn=min(mn, s);
                mx=max(mx, s);
                s=0;
            }
        }
        cout<<mn+1<<" "<<mx+1<<endl;
    }
}
