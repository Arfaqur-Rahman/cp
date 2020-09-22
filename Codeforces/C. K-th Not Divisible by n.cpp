#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
   int t;
   cin>>t;
   while(t--){
       int n, k;
       cin>>n>>k;
       //1 2 3 4 5 6 7 8 9 10_
       //x=(k+x)/n
       //nx-x=k
       //x=k/(n-1)

       int x=k/(n-1);
       int temp= k + x;
       if(temp%n==0) temp--;
       cout<<temp<<endl;
   }


}

