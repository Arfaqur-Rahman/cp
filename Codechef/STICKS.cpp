// https://www.codechef.com/problems/STICKS
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uld unsigned long long
#define endl '\n'
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++) cin>>v[i];
	    sort(v.begin(), v.end());

	    int c=0;
	    ll area=1;
	    for(int i=n-1; i>=1; i--){
            if(v[i]==v[i-1]) {c++; area*=v[i]; i--;}
            if(c==2) break;
	    }
	    if(c==2) cout<<area<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}

