#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int tc; 
    cin>>tc;
    for(int t=1; t<=tc; t++){
        string s;
        int n;
        cin>>s>>n;
        long long digit=0;
       
        for(char x: s){
            if(x=='-') continue;
            digit = digit*10 + (x-'0'); 
            digit %= n;
        }
        cout<<"Case "<<t<<": "<<( digit ? "not divisible" : "divisible")<<endl;
    }
}
