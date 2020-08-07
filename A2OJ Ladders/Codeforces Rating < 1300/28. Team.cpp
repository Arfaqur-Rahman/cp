#include<string.h>
int main()
{   int n,x,y,z,i,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&x,&y,&z);
        if((x==1 && y==1) || (y==1 && z==1) || (z==1 && x==1)){
            j++;

        }
    }
    printf("%d\n",j);

    return 0;
}
