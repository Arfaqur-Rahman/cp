#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k, c=0;
    cin>>n>>k;
    while(n--){
        int p;
        cin>>p;
        if(p%k==0) c++;
    }
    cout<<c;
}
