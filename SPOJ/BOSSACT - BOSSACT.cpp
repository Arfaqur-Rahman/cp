#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<int, int> x, pair<int, int> y){
    if (x.second<y.second) return true;
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector< pair<int, int> > v(n);
        for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second;

        sort(v.begin(), v.end(), comp);
        //for(auto x: v) cout<<x.first<<" "<<x.second<<endl;
//return 0;
        int c=1;
        int cur=v[0].second;
        for(int i=1; i<n; i++){
            if(cur<=v[i].first) {c++; cur=v[i].second;}
        }
        cout<<c<<endl;
    }
}
