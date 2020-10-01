#include<bits/stdc++.h>
using namespace std;
//m aaa rr g i t
int main(){
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        int m=0, a=0, r=0, g=0, t=0, i=0;
        for(char x: s){
            x=tolower(x);
            if(x=='a') a++;
            else if(x=='r') r++;
            else if(x=='m') m++;
            else if(x=='g') g++;
            else if(x=='i') i++;
            else if(x=='t') t++;
        }
        a/=3;
        r/=2;

        cout<<min({a,m,r,g,i,t})<<endl;


    }
}
