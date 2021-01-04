#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	  int t; cin>>t;
    for(int tc=1; tc<=t; tc++){
    	int n, q; cin>>n>>q;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        cout<<"Case "<<tc<<":"<<endl;
        while(q--){
        	int l, r; cin>>l>>r;
            cout<<upper_bound(a, a+n, r)-lower_bound(a, a+n, l)<<endl;
        }
        
    }
}
