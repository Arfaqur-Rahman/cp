#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin>>a>>b; int ab=a-b;
    if(ab%10==0) cout<<ab+1;
    else if(ab%10==9) cout<<ab-1;
    else cout<<ab+1;
}

