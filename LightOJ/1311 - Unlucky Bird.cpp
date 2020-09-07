#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc; scanf("%d", &tc);
    for(int t=1; t<=tc; t++){
        double v1, v2, v3, a1, a2;
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);

        double t1=v1/a1;
        double t2=v2/a2;

        double s1= v1*t1 -0.5*a1*t1*t1;
        double s2= v2*t2 -0.5*a2*t2*t2;

        double d= s1 + s2;

        printf("Case %d: %0.8f %f\n", t, d, max(t1, t2)*v3 );
    }
}
