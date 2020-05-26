#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mx=-1000000000;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        for(int i=0; i<n; i++){
            if(mx==a[i]){
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}
