#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1]; a[n]=0;
        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=0; i<n; i++){
            if(i>0) cout<<',';

            int j=i;
            while(i<n && a[i+1]-a[i]==1 ) i++;

            if(i-j==1) cout<<a[j]<<","<<a[i];
            else if(i-j>=2) cout<<a[j]<<"..."<<a[i];
            else cout<<a[j];

        }
        cout<<endl;
    }
}
