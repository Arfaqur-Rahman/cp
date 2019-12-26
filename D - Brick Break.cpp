#include<bits/stdc++.h>
using namespace std;
int a[200000];
int main(){

    int n, c=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=1;
    for(int i=0 ; i<n ; i++){
              if(a[i]==j){
              j++;
              c++;
         }
    }
    j==1 ? printf("-1\n") : printf("%d\n", n-c);
    return 0;
}
