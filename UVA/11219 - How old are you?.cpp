#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

#define sc(n) scanf("%lld",&n)
#define scc(n1,n2) scanf("%lld %lld",&n1,&n2)
#define sccc(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define debug(x) cerr<<#x<<": "<<x<<endl;


signed main() {
    FAST;
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++){
        cout<<"Case #"<<t<<": ";
        char slash;
        int dc, mc, yc;
        cin>>dc>>slash>>mc>>slash>>yc;

        int d, m, y;
        cin>>d>>slash>>m>>slash>>y;

        int yr=yc-y;
        if(mc<m || (mc==m && dc<d) ) yr--;

        if(yc<y || (yc==y && mc< m ) || (yc==y && mc== m && dc<d ) ) cout<<"Invalid birth date"<<endl;
        else if(yc==y && mc== m && dc==d ) cout<<0<<endl;
        else if(yr>130 ){  cout<<"Check birth date"<<endl;}
        else cout<<yr<<endl;
    }
}

