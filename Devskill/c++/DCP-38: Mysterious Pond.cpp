
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
		int n,mn=1e9,mx=-1; cin>>n;
		map<int,string> m;
		while(n--){
            int k; string s;cin>>s>>k;
            mx=max(mx,k);
            mn=min(mn,k);
            m.insert(pair<int,string>(k,s));
            }
            cout<<m.at(mx)<<" "<<m.at(mn)<<endl;
		}
	return 0;
}
