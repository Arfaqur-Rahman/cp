#include <bits/stdc++.h>
using namespace std;

int main(){
    int c=0, k, a[5];
    for(int i=0;i<5;i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++){
            if(k<a[j]-a[i]){
              printf(":(\n");
               return 0;
            }
        }
    }
    printf("Yay!\n");
    return 0;
}



