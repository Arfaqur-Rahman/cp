#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
   string s;
   while(cin>>s){
    ll c=0;
    bool b=false;
    ll lb=0;
    for(int i=0; s[i]; ){
        while(s[i]=='('){
                if(s[i]==')') break;
                lb++;
                i++;
              }
       while(s[i]==')'){
            if(s[i]=='(') break;
            if(lb) {lb--;c++;}
            i++;
       }
    }
   cout<<2*c<<endl;
   }
