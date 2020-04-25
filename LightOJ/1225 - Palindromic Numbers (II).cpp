#include<bits/stdc++.h>
using namespace std;
 
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int ts; cin>>ts;
    for(int t=1; t<=ts; t++){
        string s;
        cin>>s;
        bool b=true;
        int l=s.length();
        for(int i=0; i<l/2; i++)
        if(s[i]!=s[l-1-i]){
            b=false;
            break;
        }
        cout<<"Case "<<t<<": "<<(b ? "Yes" : "No" )<<endl;
    }
}
