#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
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

    int md= ss+(se-ss)/2;
    create(2*si, ss, md);
    create(2*si+1, md+1, se);

    st[si]=  st[2*si]+ st[2*si + 1] ;
}


int query(int si, int ss, int se, int qs, int qe){
    if( ss>qe || se<qs) return 0;
    if(ss>=qs && se<=qe ) return st[si];

    int md= ss+(se-ss)/2;

    return  query( 2*si,  ss,  md,  qs,  qe) + query( 2*si+1, md+1,  se,  qs,  qe) ;
}

void update(int si, int ss, int se, int i, int val)
{
	if (ss == se)
	{
		st[si] += val;
		return;
	}

	int mid = ss + (se - ss) / 2;
	if (i <= mid) update(2*si, ss, mid, i, val);
	else update(2*si+1, mid+1, se, i, val);

	st[si] = st[si * 2] + st[si * 2 + 1];
}

signed main(){
    //FAST;

    int tc; sc(tc);
    for(int t=1; t<=tc; t++){ getchar();
        //int trash; cin>>trash;

        int n, q; scc(n, q);
        for(int i=1; i<=n; i++) sc(a[i]);

        create(1, 1, n);

        printf("Case %lld:\n", t);

        while(q--){
            int que; sc(que);

            if(que==3){

                int l, r; scc(l, r);
                printf("%lld\n", query(1, 1, n, l+1, r+1));

            } else if(que==2){

                int i, v; scc(i, v);
                update(1, 1, n, i+1, v);

            } else{

                int x; sc(x);
                int ans =  query(1, 1, n, x+1, x+1);
                printf("%lld\n", ans);

                update(1, 1, n, x+1, -ans);

            }

        }

    }
    return 0;
}
