#include <iostream>

using namespace std;
int fib(int n){
	int a[n];
	a[0]=1;
	a[1]=1;
	for(int i=2; i<n; i++){
		a[i]= a[i-2] + a[i-1];
	}
	return a[n-1];
}
int main() {
	int n; cin>>n; cout<<fib(n);
	return 0;
}
