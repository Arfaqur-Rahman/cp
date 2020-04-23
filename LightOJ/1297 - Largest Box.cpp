#include<bits/stdc++.h>
using namespace std;


int main(){
   int tc; cin>>tc;
   for(int t=1; t<=tc; t++){
     double l, w, x;
     cin>>l>>w;
     x= ((l+w)- sqrt( l*l + w*w -w*l ))/6;
     cout<<fixed<<setprecision(9)<<"Case "<<t<<": "<<(l-2*x)*(w-2*x)*x<<endl;

   }
}
