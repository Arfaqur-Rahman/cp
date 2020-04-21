#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, n;
    cin>>n>>l;
    vector<int> v(n);
    for(int& x: v) cin>>x;
    sort(v.begin(), v.end());
    int mx=-1;
    for(int i=1; i<n; i++){
        mx=max(mx,  v[i]-v[i-1]);
    }
    
    cout<<fixed<<setprecision(10)<<  max<double>( (double)mx/2, max<double>(v[0], l-v[n-1]) );
}
