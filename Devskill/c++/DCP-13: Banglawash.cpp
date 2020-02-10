#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    while(n--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int e, f, g, h;
        cin>>e>>f>>g>>h;
        if( (a+b)>(c+d) && (e+f)>(g+h)) cout<<"Banglawash" <<endl;
        else cout<<"Miss" <<endl;
    }
}
