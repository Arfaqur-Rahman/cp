#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++){
        double ox, oy, ax, ay, bx, by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;

        double r= sqrt( pow(ax-ox, 2) + pow(ay-oy, 2) );
        double ab= sqrt( pow(ax-bx, 2) + pow(ay-by, 2) );

        ab/=2;

        double angle = asin(ab/r);

        angle*=2;
        
        double s= r*angle;

        printf("Case %d: %.8f\n", t, s);


    }
}
