#include <bits/stdc++.h>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
      int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int g=0, cnt=0;
        for(char x: s){
            if(x=='<') g++;
            else if(x=='>' && g) g--, cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
