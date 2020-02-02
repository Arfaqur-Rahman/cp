#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,t;
    cin>>n>>t;
    int a=1e9;
    for(int i=0;i<n;i++){
        int k,v;
        cin>>k>>v;
        if(v<=t) a=min(a,k);
    }
    a==1e9?cout<<"TLE":cout<<a;
}
