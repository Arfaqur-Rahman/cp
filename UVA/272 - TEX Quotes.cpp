#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string s;
    bool b= false;
    while( getline(cin,s)){
         for(int i=0; s[i]; i++){
            if( !b && s[i]=='"'){
                cout<<"``";
                b=true;
            }
            else if( b && s[i]=='"'){
                cout<<"''";
                b=false;
            }
            else cout<<s[i];
        }
        cout<<endl; //For not using this line, I got tons of WAs
    }
   
}
