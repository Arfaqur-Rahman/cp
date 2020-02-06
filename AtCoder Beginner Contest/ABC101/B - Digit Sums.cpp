#include<bits/stdc++.h>
using namespace std;
main(void){
    int n,t;
    cin>>n;
    t=n;
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    if(t%s) puts("No");
    else puts("Yes");
}
