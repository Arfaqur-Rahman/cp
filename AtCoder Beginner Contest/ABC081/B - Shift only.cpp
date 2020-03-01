#include<bits/stdc++.h>
using namespace std;

bool evenChecker(int a[], int size){
    for(int i=0; i<size; i++){
        if(a[i]%2) return false;
    }
    return true;
}

int main(){
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    while( evenChecker(a,n) ){
        for(int i=0; i<n; i++) a[i]/=2;
        c++;
    }
    cout<<c;
}
