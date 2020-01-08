#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int gcd;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    gcd=0;
    for(int i=0;i<n;i++){
        gcd=__gcd(a[i],gcd);
    }
      cout<<gcd*n<<endl;
    return 0;
}