#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    set<char> st;
    for(int i=1 ; i<s.length() ; i+=3){
        if( isalpha(s[i]) )st.insert(s[i]);
        //cout<<s[i]<<" ";
    }
    cout<<st.size();
}
