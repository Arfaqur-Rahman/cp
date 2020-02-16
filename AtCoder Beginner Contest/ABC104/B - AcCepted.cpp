#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[0]!='A' || s.back()=='C' || s[1]=='C'){
        cout<<"WA";
        return 0;
    }
    int c=0;
    for(int i=2;i<s.length();i++){
        if(s[i]=='C')c++;
    }
    if(c!=1){
        cout<<"WA";
        return 0;
    }
    for(int i=1;i<s.length();i++){
        if(s[i]!='C' && isupper(s[i])){
            cout<<"WA";
            return 0;
        }
    }
    cout<<"AC";
}
