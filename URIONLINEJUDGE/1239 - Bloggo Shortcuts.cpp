#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(getline(cin, s)){
        bool firstU=true;
        bool firstS=true;
        for(char x: s){
            if(x==' ')cout<<" ";
            else if(x=='_'){
                if(firstU) {cout<<"<i>"; firstU=false;}
                else {cout<<"</i>"; firstU=true;}
            }else if(x=='*'){
                if(firstS) {cout<<"<b>"; firstS=false;}
                else {cout<<"</b>"; firstS=true;}
            }else cout<<x;
        }
        cout<<endl;
    }

    return 0;
}
