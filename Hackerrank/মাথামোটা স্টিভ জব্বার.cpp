#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s; 
        bool bin=true, oct = true, hex= false, bal=false;
        for(char x: s){
            if(x!='0' && x!='1') {bin=false;}
            if(x=='8' || x=='9' || x>='A' && x<='F' ) {oct = false; }
            if(x>='A' && x<='F') {hex= true;  }
            if(x>='G' || (x>='a' && x<='z')) {bal=true;  break;}
        }
        if(bal){cout<<"abal kothakar"<<endl; continue;}
        if(bin) cout<<"bin, oct, dec, hex"<<endl;
        else if(oct) cout<<"oct, dec, hex"<<endl;
        else if( !bin && !oct && !hex) cout<<"dec, hex"<<endl;
        else if(hex ) cout<<"hex"<<endl;
    }

    return 0;
}
