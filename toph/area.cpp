#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        long long n; cin>>n;
        cout<<"Case "<<i<<": " <<n*n- (n-2)*n -4<<endl;
    }
}
