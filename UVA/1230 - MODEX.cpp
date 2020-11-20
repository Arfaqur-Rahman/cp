#include<stdio.h>

int expon(int a, int b, int Modulo){
    int res=1;
    while(b>0){
        if(b & 1)  res=(res*a)%Modulo;
        a=(a*a)%Modulo;
        b/=2;
    }
    return res;
}

int main(){
    int t;
    scanf("%d", &t);
    while( t--){
        int a, b, x;
        scanf("%d %d %d", &a, &b ,&x);
        int res= expon(a, b, x);
        printf("%d\n", res );
    }
    int zero;
    scanf("%d", &zero);
}
