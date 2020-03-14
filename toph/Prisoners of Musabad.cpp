#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; 
	cin>>n; 
	map<int, int> m; 
	while(n--){
		int k; 
		cin>>k; 
		m[k]++;
	}
	int t; 
	cin>>t; 
	while(t--){
		int a; 
		cin>>a; 
		if(m.find(a)->second>1)cout<<"Yes\n"; 
		else cout<<"No\n";
	} 
	return 0;
}
