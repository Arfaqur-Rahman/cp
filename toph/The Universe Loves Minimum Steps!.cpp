#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, c=0; cin>>t; while(t--){ int n, mx=-1e9; cin>>n; while(n--){int k; cin>>k; mx=max(mx, abs(k)); } cout<<"Case "<<++c<<": "<<mx<<endl;}
	return 0;
}
