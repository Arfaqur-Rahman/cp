#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, s=0, mini=1000000000;
    cin>>n>>x;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        s+=t;
        mini=min(t,mini);
    }
    cout<<n+(x-s)/mini;
}
