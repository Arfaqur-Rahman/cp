#include<bits/stdc++.h>
using namespace std;

int main(){
    char p, k;
    int a, b;
    cin>>p>>a>>k>>b;

    char l=p-2;
    char r=p+2;
    char ur=p+1;
    char ul=p-1;
    
    if(l==k && (b== a-1 || b==a+1) ) cout<<"VALIDO"<<endl;
    else if(r==k && (b== a-1 || b==a+1) ) cout<<"VALIDO"<<endl;
    else if(ur==k && (b== a+2 || b==a-2) ) cout<<"VALIDO"<<endl;
    else if(ul==k && (b== a+2 || b==a-2) ) cout<<"VALIDO"<<endl;
    else cout<<"INVALIDO"<<endl;


}
