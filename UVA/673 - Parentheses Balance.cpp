#include<bits/stdc++.h>
using namespace std;
#define int long long

bool stackCheck(string& s){
    stack<char> st;
    for(int i=0; s[i]; i++){
        if(s[i]=='(' || s[i]=='[') st.push(s[i]);
        else{
            if(st.empty()) return false;
            else if(s[i]==')' && st.top()=='[') return false;
            else if(s[i]==']' && st.top()=='(') return false;
            else st.pop();
        }
    }
    return st.empty();
}

signed main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s); // WA is encountered if getline is not used
        cout<< ( stackCheck(s) ? "Yes" : "No" ) <<endl;
    }
}
