#include<bits/stdc++.h>
using namespace std;
int main(void){
   int n,o=0,e=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   for(int i=0;i<n;i++){
    if(i%2) o+=a[i];
    else e+=a[i];
   }
   cout<<abs(e-o);
}
