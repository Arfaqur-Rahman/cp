#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d,c=0; cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++){
        if(i%m!=0 && i%n!=0 &&i%k!=0 &&i%l!=0 ){c++;}
    }
    cout<<d-c;
}
