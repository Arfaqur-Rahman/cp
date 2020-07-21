#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(getline(cin, s)){
        int i=0;
        for(char x: s){
            if(x==' ')cout<<" ";
            else{
                if( i & 1){
                    if(islower(x)) cout<<x;
                    else cout<<(char)tolower(x);
                }else{
                    if(isupper(x)) cout<<x;
                    else cout<<(char)toupper(x);
                }
                  i++;
            }
        }
        cout<<endl;
    }

    return 0;
}
