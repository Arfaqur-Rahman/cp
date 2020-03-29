#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, s=1; cin>>n>>k;
    while(n--){
        s= min(s*2, s+k);
    }
    cout<<s;
    return 0;
}
