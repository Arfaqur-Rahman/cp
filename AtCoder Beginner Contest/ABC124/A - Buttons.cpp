#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(scanf("%d %d",&a, &b)==2){
        int maxi=max(a,b);
        printf("%d\n",maxi+ max(maxi-1,min(a,b)));
    }
    return 0;
}