#include <iostream>

using namespace std;

int main() {
	int a, b; cin>>a>>b;
	int t=(b+a-1)/a;
	cout<<(t*a-b);
	return 0;
}
