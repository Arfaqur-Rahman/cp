#include<bits/stdc++.h>
using namespace std;
#define ll long long

// http://uvasolutionseam.blogspot.com/2016/09/uva-11614-etruscan-warriors-never-play.html

int main(){

    int tc;
    scanf("%d", &tc);
    while(tc--){
        ll n;
        scanf("%lld", &n);
        ll r = ( -1 + sqrt(1+8*n))/2;
        printf("%lld\n", r );

   }
}
