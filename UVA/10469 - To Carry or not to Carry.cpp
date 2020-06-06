#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%lld",&n)
#define sff(n1,n2) scanf("%lld %lld",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)

int a[32], b[32], c[32];

signed main(){
    int x, y;
    while(cin>>x>>y){
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        int index=32;
        while(x){
            a[--index]= (x%10)&1;
            x>>=1;
        }

        index=32;
        while(y){
            b[--index]= (y%10)&1;
            y>>=1;
        }

        for(int i=0; i<32; i++){
             c[i] =a[i]+b[i];
             if(c[i]>1) c[i]=0;
        }

        int s=0;
        reverse(c, c + 32);
        for(int i=0; i<32; i++){
                if(c[i]==1) s+= pow(2,i);
        }
        cout<<s<<endl;
    }
}
