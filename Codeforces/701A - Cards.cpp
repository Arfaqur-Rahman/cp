#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;
    cin>>t;
    int a[t];
    vector< pair<int, int> > v(t);
    for(int i=0; i<t; i++){
        cin>>v[i].first;
        v[i].second= i+1;
    }


    sort(v.begin(), v.end());
    for(int i=0; i<t/2; i++){
        cout<<v[i].second<<" "<<v[t-i-1].second<<endl;
    }
}
