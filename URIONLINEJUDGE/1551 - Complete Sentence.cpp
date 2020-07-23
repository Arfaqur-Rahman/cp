#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);

        set<char> st;
        for(char x: s) if(x>='a' && x<='z') st.insert(x);
        if(st.size()==26){
            cout<<"frase completa"<<endl;
        }else if(st.size()>=13 && st.size()<=25){
            cout<<"frase quase completa"<<endl;
        }else{
            cout<<"frase mal elaborada"<<endl;
        }
    }

}
