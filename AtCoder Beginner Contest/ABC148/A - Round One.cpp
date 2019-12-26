#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
  	scanf("%d %d",&a, &b);
  	int array[]={1,2,3};
  	for(int i=0;i<3;i++){
    	if(array[i]!=a && array[i]!=b) printf("%d\n",array[i]);
    }

    return 0;
}
