#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}


ll mod(string s, ll a){
    ll sum=0;
    for(int i=0; s[i]; i++ ){
        sum= (sum*10 + (s[i]-'0'))%a;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a;
        string b;
        cin>>a>>b;
        if(a==0) {cout<<b<<endl; continue;}
        ll n= mod(b,a);
        cout<<gcd(a, n )<<endl;
    }
}
