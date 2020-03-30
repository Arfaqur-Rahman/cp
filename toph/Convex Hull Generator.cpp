#include <iostream>

using namespace std;

int main() {
	int t;
	long long y=1; 
	cin>>t;
	for(int i=1; i<=t; i++) {cout<<i<<" "<<y<<endl; y+= (i+1);}
	return 0;
}
