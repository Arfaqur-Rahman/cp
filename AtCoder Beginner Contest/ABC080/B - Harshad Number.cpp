#include<bits/stdc++.h>
using namespace std;

int nd(int n){
    int s=0;
    while(n!=0){
        s+= n%10;
        n/=10;
    }
    return s;
}

int main(){
    int n; cin>>n;
    cout<<(n%nd(n)? "No" : "Yes");
    return 0;
}
