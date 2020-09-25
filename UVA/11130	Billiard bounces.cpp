#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int ah, bv, v, A, s;
    while(cin>>ah>>bv>>v>>A>>s){
        if(ah==0 && bv==0 && v==0 && A==0 && s==0) break;
        
        printf("%d %d\n", (int)(ah+v*cos( A*acos(-1)/180 )*s)/(2*ah), (int)(bv+v*sin( A*acos(-1)/180 )*s)/(2*bv) );
    }
}
