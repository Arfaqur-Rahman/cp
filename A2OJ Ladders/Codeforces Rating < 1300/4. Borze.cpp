#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i=0; s[i]; i++){
        if(s[i]=='.') cout<<0;
        if(s[i]=='-'){
            if(s[i+1]=='-'){
                cout<<2;
                i++;
            }else{
                cout<<1;
                i++;
            }
        }
    }

    return 0;
}
