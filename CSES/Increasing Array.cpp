#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int& x: v) cin>>x;

    ll c=0;
    for(int i=1; i<v.size(); i++)
        if(v[i]<v[i-1]){
            c+= v[i-1]-v[i]; 
            v[i]+=v[i-1]-v[i]; 
            //cout<<v[i-1]<<" "<<v[i]<<" "<<c<<endl;
        }
    cout<<c;
}
