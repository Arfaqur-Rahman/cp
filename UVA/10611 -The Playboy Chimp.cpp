#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        int poslow, posup;
        poslow = lower_bound(v.begin(), v.end(), k) - v.begin() ; //cout<<posl<<endl;
        posup = upper_bound(v.begin(), v.end(), k) - v.begin();
        
         if( poslow==0) cout<<"X ";
         else cout<< v[poslow-1]<<' ';

        if( posup == n ) cout<<'X'<<endl;
        else cout<< v[posup]<<endl;
    }
}
