#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
    int a, b, c;
    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0) return 0;
    if( a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b) cout<<"right"<<endl;
    else cout<<"wrong"<<endl;
   }
}
