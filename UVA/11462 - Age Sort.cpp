#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    scanf("%d",&n);
    while(n!=0){
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        for(int i=0;i<n-1;i++) printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
        scanf("%d",&n);
    }
}
