#include <iostream>

using namespace std;

int main() {
	int b, a, s=0; cin>>b>>a; while(b--){int n; cin>>n; s+=n;} cout<<(s+a-1)/a;
	return 0;
}
