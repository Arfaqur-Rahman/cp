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

signed main(){
    FAST;

    int N;
    while(cin>>N && N){
        int G=0;
        for(int i=1;i<N;i++)
        for(int j=i+1;j<=N;j++)
        {
            G+=__gcd(i,j);
        }
        cout<<G<<endl;
    }
}




