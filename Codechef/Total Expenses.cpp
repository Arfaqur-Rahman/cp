#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int q,p;
        scanf("%d%d",&q,&p);
        int qp= q*p;
        q>1000? printf("%f\n",(float)qp-qp*.1) : printf("%f\n",(float)qp);
    }
    return 0;
}
