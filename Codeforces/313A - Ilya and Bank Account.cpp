#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=0){cout<<n;}
    else{
        int a=abs(n%10);
        n/=10;
        int b=abs(n%10);
        n/=10;
        if(a>b){
            a=0;
        }
        else{
            b=0;
        }
       
        n= n*10-(a+b);
        cout<<n;
    }
}
