#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/gym/101853/problem/I

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        double a, b, d;
         scanf("%lf %lf %lf", &a, &b, &d);

        double Halfcir = (acos(-1)*d*d/8)/2;

        double Bigcir= acos(-1)*d*d/4;

        double square = d*d/2;

        double cir_square= Bigcir-square;

        double onefourth=Halfcir-cir_square/4;

        double full=onefourth*4;

        printf("%.6f\n", full);

    }
}
