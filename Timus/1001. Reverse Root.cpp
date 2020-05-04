#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long t;
    vector<long long> v;
    while(cin>>t) v.push_back(t);
    reverse(v.begin(), v.end()); // from the last one till the first one
    for(long long x: v){cout<<fixed<<setprecision(4)<<sqrt(x)<<endl;}
}
