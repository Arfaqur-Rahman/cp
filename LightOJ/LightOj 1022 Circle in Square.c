#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        double r;
        scanf("%lf",&r);
        printf("Case %d: %.2lf\n", i, 4*r*r - 2*acos(0.0)*r*r);

    }
    return 0;
}

