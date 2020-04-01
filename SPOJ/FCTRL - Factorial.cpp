#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        for(int i=1; pow(5,i)<=n ; i++) c+= n/pow(5,i);
        cout<<c<<endl;
    }
}

