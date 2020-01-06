#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    if(t%2){
       printf("%d %d", t/2, t/2+1 );
    }else{
        if(t/2%2) printf("%d %d", t/2-2, t/2+2 );
        else printf("%d %d", t/2-1, t/2+1 );
    }
    return 0;
}