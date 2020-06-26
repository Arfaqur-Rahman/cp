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
        cout<<N<<": ";
        int ii=0, v=0, x=0, l=0, c=0;
        for(int n=1; n<=N; n++){
            if(n%10==1) ii++;
            else if(n%10==2) ii+=2;
            else if(n%10==3) ii+=3;
            else if(n%10==4) {ii++; v++;}
            else if(n%10==5) {v++;}
            else if(n%10==6) {ii++; v++;}
            else if(n%10==7) {ii+=2; v++;}
            else if(n%10==8) {ii+=3; v++;}
            else if(n%10==9) {ii++; x++;}

            if(n==100) c++;
            else if(n>=90){x++; c++;}
            else if(n>=80){l++; x+=3;}
            else if(n>=70){l++; x+=2;}
            else if(n>=60){l++; x++;}
            else if(n>=50) {l++;}
            else if(n>=40){l++; x++;}
            else if(n>=30) x+=3;
            else if(n>=20) x+=2;
            else if(n>=10) x++;

        }
        cout<<ii<<" i, "<<v<<" v, "<<x<<" x, "<<l<<" l, "<<c<<" c"<<endl;
    }
}
