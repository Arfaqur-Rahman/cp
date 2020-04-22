#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
	ios::sync_with_stdio(false);
    string s;
    getline(cin,s);
    cout<<s[0];
    for(int i=0; s[i]; i++) if(s[i]==' ') cout<<s[i+1];
}

