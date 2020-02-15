#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n, m; cin>>n>>m;
    int a[m+1]={0};
    for(int i=0;i<n;i++){
        int k; cin>>k;
        for(int i=1;i<=k;i++){
            int t;
            cin>>t;
            a[t]++;
        }
    }
   
    int c=0;
    for(int i=1;i<m+1;i++){
            c+=(a[i]==n);
    }
    cout<<c;
}
