#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k, i, temp; cin>>n>>k;
    if(n%2==0){
        if(k>n/2){
            k=k-n/2;
            cout<<2*k;
        }
        else {
            cout<<((k-1)*2+1);
        }
    }else{
        if(k>n/2+1){
            k=k-n/2-1;
            cout<<2*k;
        }
        else{
            cout<<((k-1)*2+1);
        }
    }

}
