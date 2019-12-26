
#include<bits/stdc++.h>
int a[20], b[20];
using namespace std;
int main(){
    int n, s=0;
    scanf("%d",&n);
    //while(scanf("%d %d", &a, &b)==2)
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            s=s+a[i]-b[i];
        }
    }
    printf("%d",s);
    return 0;
}
