#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl '\n'
#define sc(n) scanf("%lld",&n)
#define scc(n1,n2) scanf("%lld %lld",&n1,&n2)
#define sccc(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define debug(x) cerr<<#x<<": "<<x<<endl

int a[100010], st[4*100010];

void create(int si, int ss, int se){
    if(ss == se){
        st[si]=a[ss];
        return ;
    }

    int md= (ss+se)/2;
    create(2*si, ss, md);
    create(2*si+1, md+1, se);

    st[si]= min( st[2*si], st[2*si + 1] );
}


int min_range_q(int si, int ss, int se, int qs, int qe){
    if( ss>qe || se<qs) return INT_MAX;
    if(ss>=qs && se<=qe ) return st[si];

    int md= (ss+se)/2;

    return min( min_range_q( 2*si,  ss,  md,  qs,  qe), min_range_q( 2*si+1, md+1,  se,  qs,  qe) );
}

signed main(){
    FAST;



    int n; cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];

    create(1, 1, n);

    int q; cin>>q;
    while(q--){
        int l, r; cin>>l>>r;
        cout<<min_range_q(1, 1, n, l+1, r+1)<<endl;
    }



    return 0;
}
