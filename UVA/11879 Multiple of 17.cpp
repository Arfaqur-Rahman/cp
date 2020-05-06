#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    while(cin>>s && s[0]!='0'){
        int n=0;
        for(int i=0; i<s.length(); i++){
            n= n*10 + (s[i]-'0');
            n%= 17;
        }
        cout<<(n? 0 : 1)<<endl;
    }
}
