#include <bits/stdc++.h>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int t;
     cin>>t; cin.ignore();
     while(t--){
         string s;
         getline(cin,s);
         for(int i=0; s[i]; i++) if(isalpha(s[i])) s[i]= s[i] + 3;
         //cout<<s<<endl;

         reverse(s.begin(), s.end());
         //cout<<s<<endl;

         int l= s.length()/2;
         for(int i=l; s[i]; i++) s[i]= s[i] - 1;
         cout<<s<<endl;
     }

    return 0;
}
