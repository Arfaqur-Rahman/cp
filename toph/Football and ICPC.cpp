#include <iostream>

using namespace std;

int main() {
	int t; 
	cin>>t; 
	int a[t], b[t]; 
	for(int i=0; i<t; i++) cin>>a[i]; 
	for(int i=0; i<t; i++) cin>>b[i]; 
	int mx=0; 
	for(int i=0; i<t; i++) mx=max(20*a[i]-10*b[i], mx); 
	cout<<mx<<endl; 
	return 0;
}
