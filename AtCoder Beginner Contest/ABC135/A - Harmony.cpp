#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b;
    scanf("%lld %lld",&a, &b);
    for(long long int i=0;i<a || i<b;i++){
        if(abs(a-i)==abs(b-i)){
            printf("%d\n",i);
            return 0;
        }
   }
   printf("IMPOSSIBLE\n");
    return 0;
}

