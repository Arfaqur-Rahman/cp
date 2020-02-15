#include<bits/stdc++.h>
using namespace std;
int a[1000000]={0};
int main(void){
   int n;
   cin>>n;
   int c=1;
  while(a[n]==0){
        a[n]=1;
        n=(n%2 ? 3*n+1 : n/2); 
        c++;
        if(a[n]!=0){
                cout<<c;
                break;
        }
    }
}
