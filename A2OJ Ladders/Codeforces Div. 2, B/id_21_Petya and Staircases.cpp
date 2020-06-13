#include<bits/stdc++.h>
using namespace std;


int main(){

    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++){
        cin>>a[i];
        if(a[i]==1 || a[i]==n) {
            cout<<"NO"; return 0;
        }
    }

    sort(a, a+m);
    for(int i=2; i<m; i++){
        if(a[i-2]+1==a[i-1] && a[i-1]+1==a[i]){
            cout<<"NO"; return 0;
        }
    }
    cout<<"YES";
}
