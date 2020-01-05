#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
         int c=0;
         long long int n;
         scanf("%lld",&n);
         if(n==1){
                printf("0\n");
                continue;
         }
         while(n!=1 && (n%2==0 || n%3==0 || n%5==0)){
            if(n%2==0){
               n/=2;
               c++;
            }
            else if(n%3==0){
               n=2*n/3;
               c++;
            }
            else if(n%5==0){
                 n=4*n/5;
                 c++;
            }
        }
        if(n==1){
            printf("%d\n",c);
         }else printf("-1\n");
    }
    return 0;
}

