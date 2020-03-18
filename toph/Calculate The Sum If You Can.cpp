#include <iostream>

using namespace std;

int main() {
	int t; cin>>t; while(t--){ long long n; cin>>n; if(n==1){cout<<1<<"\n"; continue;} cout<<( n & 1 ?  (-n/2)+ 1 : (-n/2) )<<"\n"; }
	return 0;
}
