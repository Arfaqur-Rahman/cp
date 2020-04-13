#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sz=s.length();
        int f=0, b=0, zero = 0;
        
        for(int i=0; i<sz; i++){
            if(s[i]=='0') zero++;
        }
        
        for(int i=0; i<sz; i++){
            if(s[i]=='1') break;
            f++;
        }

        for(int i=sz-1; i>=0; i--){
            if(s[i]=='1') break;
            b++;
        }
        
        cout<<(zero-f-b>0 ? zero-f-b : 0)<<'\n';
        
    }

}
