#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc; scanf("%d", &tc);
    for(int t=1; t<=tc; t++){
        double r1, r2, r3;
        scanf("%lf %lf %lf", &r1, &r2, &r3);
                                                     //       C
        double a= r1+r2, b= r1+r3, c=r2+r3;         //      a/_\b

        double cosC= ( b*b + a*a -c*c )/(2*b*a);   //    B   c   A
        double C= acos(cosC);
        double Ca= (r1*r1)*C/2;

        double cosB= ( a*a + c*c -b*b )/(2*a*c);
        double B= acos(cosB);
        double Ba= (r2*r2)*B/2;

        double cosA= ( c*c + b*b -a*a )/(2*b*c);
        double A= acos(cosA);
        double Aa= (r3*r3)*A/2; //360 degree=2pi

        double s= a+b+c;
        s/=2.0;
        double tri = sqrt( s*(s-a)*(s-b)*(s-c) );

        printf("Case %d: %.10f\n", t, tri-Aa-Ba-Ca);
    }
}
