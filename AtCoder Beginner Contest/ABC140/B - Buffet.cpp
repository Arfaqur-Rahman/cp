#include<iostream>
using namespace std;

int main(void){
    int n,s=0;
    cin>>n;
    int a[n], b[n], c[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        s+=t;
    }
    for(int i=0;i<n-1;i++) cin>>b[i];
    for(int i=0;i<n-1;i++){
        if(a[i]+1==a[i+1]) s+=b[ a[i] - 1 ];
    }
    cout<<s;
}
