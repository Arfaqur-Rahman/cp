#include <iostream>

using namespace std;

int main() {
	int t, mx=-1; cin>>t; while(t--){int n; cin>>n; mx=max(mx,n);} cout<<mx;
	return 0;
}
