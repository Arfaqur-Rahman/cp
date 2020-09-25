#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://shahidul-brur.blogspot.com/2017/05/lightoj-1307-counting-triangles.html
// http://mahimpantho.blogspot.com/2017/08/lightoj-1307-counting-triangles.html

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int tc;
    cin>>tc; cin.ignore();
    for(int t=1; t<=tc; t++){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(ll& x: v) cin>>x;

        sort(v.begin(), v.end());

        ll c=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n-1; j++){
                auto itr=upper_bound(v.begin(), v.end(), v[i]+v[j]-1 )-v.begin()-1 ;
                c += (itr - j);
            }
        }
        cout<<"Case "<<t<<": "<<c<<endl;

    }
}
