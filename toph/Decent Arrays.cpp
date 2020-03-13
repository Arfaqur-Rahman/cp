#include <iostream>

using namespace std;

int main() {
	int n; cin>>n; int k; cin>>k; n--; while(n--) { int l; cin>>l; if(l>=k) k=l; else{ cout<<"No"; return 0;} } cout<<"Yes";
	return 0;
}
