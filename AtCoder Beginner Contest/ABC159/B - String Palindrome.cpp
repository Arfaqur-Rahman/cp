#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   int l=s.length();
   for(int i=0; i<l/2; i++){
        if(s[i]!=s[l-1-i]) {
            cout<<"No"; return 0;
        }
   }
   int k=(l-1)/2;
   for(int i=0; i<k/2; i++){
        if(s[i]!=s[k-1-i]) {
            cout<<"No"; return 0;
        }
   }
   for(int i=(l+3)/2; i<l/2; i++){
        if(s[i]!=s[l-1-i]) {
            cout<<"No"; return 0;
        }
   }
   cout<<"Yes";
}
