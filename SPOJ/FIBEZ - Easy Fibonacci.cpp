#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    ll a[(int)5e5+1];
    a[0]=0;
    a[1]=1;

    for(int i=2; i<=(int)5e5; i++) a[i]= (a[i-1]+a[i-2])%( (int)1e8 + 7);

    int tc;
    scanf("%d", &tc);
    while(tc--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", a[n]);

   }
}
