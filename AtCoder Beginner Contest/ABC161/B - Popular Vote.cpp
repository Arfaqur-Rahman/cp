#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, s=0;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]*4*m >= s ) c++; // a[i]>= s/(4*m) causes WA... better use multiplication and avoid division
    }
    cout<<( c>=m  ? "Yes": "No" );
}
