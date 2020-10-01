
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1)
int main(){
    ll n;
    cin>>n;
    while(n>1){
        if(n%2==0) n/=2;
        else n=3*n+3;
        if(n%3==0){cout<<"NIE"; return 0;}
    }
    cout<<"TAK";
    
}
