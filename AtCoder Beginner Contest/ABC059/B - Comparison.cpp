#include<bits/stdc++.h>
using namespace std;
main(void){
   string a, b;
   int check=0;
   cin>>a>>b;
   if(a.length()>b.length()){
        check=1;
   }else if(a.length()<b.length()){
        check=-1;
   }else{
        for(int i=0;i<a.length();i++){
            if(a[i]>b[i]){
                check=1; break;
            }else if(a[i]<b[i]){
                check=-1; break;
            }else continue;
        }
   }
   if(check>0) cout<<"GREATER";
    else if(check<0) cout<<"LESS";
   else cout<<"EQUAL";
}
