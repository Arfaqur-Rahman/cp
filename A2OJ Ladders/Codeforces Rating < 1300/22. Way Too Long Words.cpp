#include<string.h>
#include<stdio.h>
int main()
{   int num,i;
    char x[101];
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%s",&x);
        if(strlen(x)<=10){
            printf("%s\n",x);

        }else{
           printf("%c%d%c\n",x[0],strlen(x)-2,x[strlen(x)-1]);
        }
    }
    return 0;
}
