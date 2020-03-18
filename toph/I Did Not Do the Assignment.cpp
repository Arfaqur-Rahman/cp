#include <bits/stdc++.h>

using namespace std;
bool isprime(int n){
	for(int i=2; i<=sqrt(n); i++) if(n%i==0) return false;
	return true;
}
int main() {
	int n; cin>>n; 
	if(isprime(n)) cout<<"NO PUNISHMENT";
	else{
		for(int i=0; i<n; i++) cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
	}
	return 0;
}
