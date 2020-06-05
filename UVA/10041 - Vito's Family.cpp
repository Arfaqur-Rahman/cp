#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%lld",&n)
#define sff(n1,n2) scanf("%lld %lld",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)

signed main(){
    int t;
    sf(t);
    while(t--){
        int n;
        sf(n);
        int a[n];
        for(int i=0; i<n; i++) sf(a[i]);
        sort(a,a+n);
        int median=a[n/2];
        int sum=0;
        for(int i=0; i<n; i++) sum+=abs(median-a[i]);
        pf("%lld\n", sum);
    }
}
