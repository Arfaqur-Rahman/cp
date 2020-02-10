#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int k=0;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            s[i]=tolower(s[i]);
        }
        for(int i=0; i<=s.length()/2; i++){
            if( s[i] != s[s.length()-(i+1)] ){
                k++;
                break;
            }
        }
        cout<<(k ? "No\n" : "Yes\n");
    }
}
