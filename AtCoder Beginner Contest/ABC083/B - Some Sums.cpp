#include<bits/stdc++.h>
using namespace std;
main(void){
    int n, a, b,sum=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
            int t=i,s=0;
        while(t!=0){
            int t2=t%10;
            s+=t2;
            t/=10;
        }
        if(a<=s && b>=s){
            sum+=i;
        }
    }
    cout<<sum;
}
