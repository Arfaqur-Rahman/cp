#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int t; cin>>t; cin.ignore();
    while(t--){
        string s; getline(cin, s);

        stack<char> st;
   
        for (int i = 0; s[i]; i++) {
            if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') st.pop();
                else st.push(s[i]);
            } else if (s[i] == ']') {
                if (!st.empty() && st.top() == '[') st.pop();
                else st.push(s[i]);
            } else st.push(s[i]);
        }
        if(st.empty()) cout<<"Yes"<<endl; else cout<<"No\n";
        

    }
}
