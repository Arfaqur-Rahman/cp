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
        int n;
        cin>>n;
        for(int i=0; s[i]; i++){
            if(s[i]-n<'A'){
                int sz='A'-(s[i]-n); //cout<<sz<<"SZ"<<endl;
                s[i]='Z'-sz+1; //cout<<s[i]<<"s[i]\n";
            }else{
                s[i]-=n;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
