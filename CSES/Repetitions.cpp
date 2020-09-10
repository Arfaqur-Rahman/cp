#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        int a=0, t=0, c=0, g=0;
        int amx=0, tmx=0, cmx=0, gmx=0;

        for(int i=0; s[i]; ){
            while(s[i]=='A') {a++; i++;} 
            if(a>0) {amx=max(amx, a); a=0;}

            while(s[i]=='T'){t++; i++;} 
            if(t>0){ tmx=max(tmx, t); t=0;}

            while(s[i]=='C'){c++; i++;}
            if(c>0){cmx=max(cmx, c); c=0;}

            while(s[i]=='G'){g++; i++;} 
            if(g>0){gmx=max(gmx, g); g=0;}
        }
        cout<<max( {amx, tmx, cmx, gmx} )<<endl;

    }


}
