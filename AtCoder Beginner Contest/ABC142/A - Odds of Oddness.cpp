#include<stdio.h>
int main(){
  int t,c=0;
  scanf("%d",&t);
  for(int i=1; i<=t; i++){
        c+=i%2;
  }
  printf("%f",(double)c/t);
  return 0;
}