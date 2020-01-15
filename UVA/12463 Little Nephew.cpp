#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e;
    while(cin>>a>>b>>c>>d>>e){
        if(a==0 && b==0 &c==0 && d==0 && e==0) return 0;
         d*=d;
         e*=e;
        cout<<a*b*c*d*e<<endl;
    }
    return 0;
}
