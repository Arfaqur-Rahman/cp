#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin>>n;
	int s=1;
	for(int i=2; i<=n; i++){if(__gcd(i,n)==1)s++;}
	cout<<s;
	return 0;
}
