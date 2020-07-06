#include<bits/stdc++.h>
using namespace std;
#define int long long
#define max 1e9
int trailZeroCounterInFactorial(int n){
    int c=0;
    for(int i=5; n/i>=1; i*=5) c+=n/i;
    return c;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    while(cin>>n){
        int c=0;
        vector<int> v;
        for(int i=1; trailZeroCounterInFactorial(i)<=n ; i++){
            if( trailZeroCounterInFactorial(i) ==n ) {c++; v.push_back(i);}
        }
        cout<<c<<endl;
        for(int x: v) cout<<x<<" "; 
        cout<<endl;

    }

}
