#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> st;
    for(int i=0;s[i]!='\0';i++){
        st.insert(s[i]);
    }
    cout<<( (st.size() % 2==0) ? "CHAT WITH HER!" : "IGNORE HIM!" );
}
