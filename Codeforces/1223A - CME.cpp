#include<iostream>
using namespace std;
 
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){ cout<<2<<endl; continue;}
        if(n%2) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
