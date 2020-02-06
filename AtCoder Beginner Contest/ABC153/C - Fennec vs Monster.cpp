#include<bits/stdc++.h>
using namespace std;
main(void){
    int n, k;
    long long int s=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-k;i++){
        s+=a[i];
    }
    cout<<( s );
}
