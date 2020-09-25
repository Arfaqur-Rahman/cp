#include<bits/stdc++.h>
using namespace std;
#define ll long long

int mod(string s, int mod){
    int n=0;
    for(int i=0; s[i]; i++) n=(n*10+s[i]-'0')%mod;
    return n;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a[5]={76,16,56,96,36};
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=mod(s, 5);
        if(n==0 && s=="0") cout<<1<<endl;
        else if(n==1 && s=="1") cout<<66<<endl;
        else cout<<a[n]<<endl;
    }

}
