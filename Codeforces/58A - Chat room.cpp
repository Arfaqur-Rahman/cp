#include<bits/stdc++.h>
using namespace std;

int main(){
     string s;
     cin>>s;
     int c=0;
     for(int i=0;s[i]!='\0';i++){

        if(s[i]=='h' && c==0){
            c++;
        }
        if(s[i]=='e' && c==1){
            c++;
        }
        int l_pos;
        if(s[i]=='l' && c==2 ){
            c++; l_pos=i;
        }
        if(s[i]=='l' && c==3 && l_pos!=i){
            c++;
        }
        if(s[i]=='o' && c==4){
            c++;
        }
     }
     cout<<(c==5? "YES" : "NO");
}
