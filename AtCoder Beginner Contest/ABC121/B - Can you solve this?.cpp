#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c, count=0;
    cin>>n>>m>>c;
    int b[m];
    for(int i=0; i<m; i++) cin>>b[i];
    int a[m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[j];
        int s=0;
        for(int j=0; j<m; j++) s+=a[j]*b[j];
        if((s+c)>0) count++;
    }
    cout<<count;
}
