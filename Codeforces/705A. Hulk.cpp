#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    cout<<"I hate ";
    string s1,s2;
    if(n%2==0){ s1="love";s2="hate";}
    else{ s1="hate";s2="love";}
    for(int i=n;i>1;i--){
        if(i%2==0)  cout<<"that I "<<s1<<" ";
        else cout<<"that I "<<s2<<" ";
    }
    cout<<"it";
}
