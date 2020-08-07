#include<stdio.h>
int main(){
    int n,i,X=0;
    char s[4];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",&s);

        if(s[1]=='+') X++;
        else if(s[1]=='-') X--;
    }
    printf("%d",X);
    return 0;
}
 
