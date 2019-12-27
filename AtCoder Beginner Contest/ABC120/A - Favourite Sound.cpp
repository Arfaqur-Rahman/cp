#include<bits/stdc++.h>
int main(){
  int a, b, c;
  while(scanf("%d%d%d",&a,&b,&c)==3){
    if(b)
    if(b/a>c) printf("%d\n", c);
    else if(b/a<c) printf("%d\n", b/a);
    else printf("%d\n",c);
  }
  return 0;
}
