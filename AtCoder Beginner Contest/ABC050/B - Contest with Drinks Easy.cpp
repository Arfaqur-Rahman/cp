#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int m1,m2;
        cin>>m1>>m2;
        cout<<s-a[m1]+m2<<endl;
    }
    return 0;
}
