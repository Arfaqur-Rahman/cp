#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    double  a1, a2,
            b1, b2,
            c1, c2,
            d1, d2,
            x, y;
    while(cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2){
        //midpoint of diagonal same for both diagonals...so ((d1+b1)/2, (d2+b2)/2) = ( (a1+c1)/2, (a2+c2)/2);
        //(a1, a2) can never be same as (b1, b2) as they were part of the same side...same go for (c1, c2) and (d1, d2)
        if(b1==c1 && b2==c2){
            x=d1+a1-b1;
            y=d2+a2-b2;

        }else if(d1==b1 && d2==b2){
            x=a1+c1-b1;
            y=a2+c2-b2;

        }else if(c1==a1 && c2==a2){
            x=b1+d1-c1;
            y=b2+d2-c2;

        }else{// when d1==a1 and d2==a2
            x=b1+c1-d1;
            y=b2+c2-d2;

        }
         cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
    }
}
