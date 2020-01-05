#include<stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
       double l;
       scanf("%lf",&l);
       double w=l/10*6.0;
       double r=l/5;
       double red=acos(-1)*r*r;
        printf("%.2lf %.2lf\n",red, l*w-red);
    }

    return 0;
}