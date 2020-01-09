#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double tri= 0.5* a * b;
    double bigc= acos(-1) * c* c/4;
    double r=a*b/(a+b+c);
    double sc= acos(-1) * r* r;
    printf("%.4lf %.4lf %.4lf", bigc- tri, tri- sc, sc);
    return 0;
}