#include<bits/stdc++.h>
using namespace std;
int main(void){
   int n,x=0,m=0;
   cin>>n;
   char a[n];
   for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]=='I')x++;
        else x--;
        m = max(m,x);
   }
   cout<<m;
}
