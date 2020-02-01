#include<bits/stdc++.h>
using namespace std;
int main(void){
   string s;
   cin>>s;
   for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                cout<<"no";
                return 0;
            }
        }
   }
   cout<<"yes";
}
