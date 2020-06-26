#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cerr<<#x<<": "<<x<<endl;
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)

int div(int n){
    int c=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
                c++;
            int temp = n/i;
            if(i!=temp) c++;
        }
    }
    return c;
}

signed main(){
    FAST;

    int t;
    cin>>t;
    while(t--){
        int a, b,mx=-1;
        cin>>a>>b;
        int pos=0;
        for(int i=a; i<=b; i++){
            int d= div(i);
            if(d>mx){
                mx=d;
                pos=i;
            }

        }
        cout<<"Between "<<a<<" and "<<b<<", "<<pos<<" has a maximum of "<<mx<<" divisors."<<endl;

    }
}




