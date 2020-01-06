#include<bits/stdc++.h>
int main(){
    int n, s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    std::sort(a,a+n);
    for(int i=0; i<n-1; i++){
        s=s+a[n-1]-a[i];
    }
    printf("%d",s);
    return 0;
}
