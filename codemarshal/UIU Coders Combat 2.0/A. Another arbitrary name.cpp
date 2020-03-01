#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' && s[i+1]=='n' && s[i+2]=='i' && s[i+3]=='k'){
            cout<<"he did it again"<<endl;
            return 0;
        }
    }
    cout<<"not this time"<<endl;
}

