#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    string s;
    while(cin>>c>>s){
        if(c=='0' && s=="0") break;
        bool firstzero=true;
        string temp;
        for(char x: s){
            if(x!=c){
                if(firstzero && x=='0') continue;
                else{firstzero=false;}
                temp+=x;
            }
        }
        cout<<(temp.empty() ? "0" : temp)<<endl;
    }
}
