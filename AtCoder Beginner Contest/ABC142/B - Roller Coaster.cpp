#include<stdio.h>
int main(){
  int t,h,k,c=0;
  scanf("%d%d",&t,&k);
  while(t--){
    scanf("%d",&h);
     c+= h>=k;
  }
  printf("%d",c);
  return 0;
}