#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[100], b[100];
    int s;
    scanf("%d",&s);
    scanf("%s%s",&a,&b);
    for(int i=0;i<s;i++){
        printf("%c%c",a[i],b[i]);
    }

    return 0;
}
