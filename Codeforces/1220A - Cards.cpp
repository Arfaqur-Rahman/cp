#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char c;
    int zero=0, one=0;
    while(n--){
        cin>>c;
        if(c=='z') zero++;
        if(c=='n') one++;
    }
    while(one--) cout<<1<<" ";
    while(zero--) cout<<0<<" ";
}
