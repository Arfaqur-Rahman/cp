#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int num, s=0;
        cin>>num;
        while(num--){
            int n;
            cin>>n;
            if(n>0) s+=n;
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
}

