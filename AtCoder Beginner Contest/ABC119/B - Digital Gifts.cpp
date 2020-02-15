#include<bits/stdc++.h>
using namespace std;
int a[1000000]={0};
int main(void){
   int n;
   cin>>n;
   double s=0.0;
   while(n--){
        double x;
        string u;
        cin>>x>>u;
        u=="JPY" ? s+=x : s+=380000.0*x;
   }
   cout<<s;
}
