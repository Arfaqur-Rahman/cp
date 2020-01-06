#include<bits/stdc++.h>
int main(){
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0; i<n; i++) scanf("%lld",&a[i]);
    std::sort(a,a+n);
    for(int i=0; i<n-2; i++){
        int b=a[i];
        int c=a[i+1];
        int d=a[i+2];
        if(b+c>d && c+d>b && b+d>c){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}