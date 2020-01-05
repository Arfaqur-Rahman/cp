#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,d;
    scanf("%d %d",&a, &b);
    scanf("%d %d",&c, &d);
    if(abs(a-c)>= abs(b-d)) printf("%d",abs(a-c));
    else if( abs(a-c) < abs(b-d)) printf("%d",abs(b-d));


    return 0;
}