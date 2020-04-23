#include<bits/stdc++.h>
using namespace std;

int binToDec(string s1){
    int sum=0;
    reverse(s1.begin(), s1.end());
    for(int i=0; s1[i]; i++) if(s1[i]=='1') sum+= pow(2, i);
    return sum;
}

int main(){
   int tc; cin>>tc;
   for(int t=1; t<=tc; t++){
     double l, w, x;
     cin>>l>>w;
     x= ((l+w)- sqrt( l*l + w*w -w*l ))/6;
     cout<<fixed<<setprecision(9)<<"Case "<<t<<": "<<(l-2*x)*(w-2*x)*x<<endl;

   }
}
