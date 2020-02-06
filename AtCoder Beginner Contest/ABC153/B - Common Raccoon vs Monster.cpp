#include<bits/stdc++.h>
using namespace std;
main(void){
    int h, n, s=0;
    cin>>h>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    cout<<( s>=h?"Yes":"No" );
}
