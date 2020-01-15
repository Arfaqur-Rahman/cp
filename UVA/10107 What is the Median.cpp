#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> v;
    long long t;
    cin>>t;
    v.push_back(t);
    cout<<t<<endl;
    while(cin>>t){
        v.push_back(t);
        sort(v.begin(), v.end());
        long long s=v.size();
        if(s%2) cout<<(v[s/2])<<endl;
        else cout<<(v[s/2]+v[s/2-1])/2<<endl;
    }
    return 0;
}