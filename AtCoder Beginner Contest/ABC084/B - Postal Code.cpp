#include<bits/stdc++.h>
using namespace std;
main(void){
    int a,b,c=0;
    cin>>a>>b;
    char s[a+b+1];
    cin>>s;
    if(s[a]!='-'){
            cout<<"No";
            return 0;
    }
    for(int i=0;i<a+b+1;i++){
        if(s[a]==i) continue;
        if(s[i]=='0'|| s[i]=='1'|| s[i]=='2'|| s[i]=='3'|| s[i]=='4'|| s[i]=='5'|| s[i]=='6'|| s[i]=='7'|| s[i]=='8'|| s[i]=='9' ){
            c++;
        }
    }
    cout<<(c==a+b?"Yes":"No");
}
