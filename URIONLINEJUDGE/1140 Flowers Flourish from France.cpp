#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    while(getline(cin,input) && input!="*"){
        stringstream ss(input);
        set<char> st;
        while(ss>>input){
            st.insert(tolower(input[0]));
        }
        cout<<(st.size()==1?'Y':'N')<<endl;
    }

    return 0;
}

