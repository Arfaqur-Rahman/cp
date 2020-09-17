#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int tc;
    cin>>tc;

    for(int i=1; i<=tc; i++){

        ll ax, ay, bx, by, cx, cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        ll dx= ax+cx-bx;
        ll dy= ay+cy-by;

        ll area = 0.5 * ( (ax*by) + (bx*cy) + (cx*dy) + (dx*ay) - ( (bx*ay) + (cx*by) + (dx*cy) + (ax*dy) ) );

        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<( area < 0 ? area * (-1) : area )<<endl;
    }
}
