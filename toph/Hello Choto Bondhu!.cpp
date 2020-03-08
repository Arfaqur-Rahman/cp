#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s[s.length()-1]-48;
        cout<<n*n%10<<endl;
    }
}
