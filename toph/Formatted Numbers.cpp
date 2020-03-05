#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s1; cin>>s;
    int c=0;
    for(int i=s.length()-1; i>=0;i--){
        if(c==3){
            c=0; 
            s1+=',';
            
        }
        c++; 
        s1+=s[i];
       
    }
    reverse(s1.begin(),s1.end());
     for(int i=0; i<s1.length();i++){
        cout<<s1[i];
    }
}
