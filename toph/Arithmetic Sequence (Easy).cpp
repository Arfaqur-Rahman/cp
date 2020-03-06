#include <iostream>

using namespace std;

int main() {
	int n; cin>>n; n= n*(n+1)/2;
	int m; cin>>m;
	while(m--){
		int t;
		cin>>t;
		n-=t;
	}
	cout<<n;
	return 0;
}
