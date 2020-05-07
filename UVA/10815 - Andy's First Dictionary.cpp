#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<string> st;
    string s;
    while(cin>>s){
        string s2="";
        for(char x: s){
            if(isalpha(x)){
                s2+= tolower(x);
            }
            else{
                if(s2!=""){
                    st.insert(s2);
                    s2="";
                }
            }
        }
        if(s2!="") st.insert(s2);
    }

    for(string x: st) cout<<x<<endl;
}
