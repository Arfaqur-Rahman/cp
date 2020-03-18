#include <bits/stdc++.h>

using namespace std;

int isprime(int n){
	if(n==1) return -1;
	int mx=-1;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return -1;
	}
	return n;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int i, r, l, mx =0;
		cin>>l>>r;
		for(i=r; i>=l; i--){
            if(isprime(i)==-1) mx=-1;
            else{
                mx=isprime(i);
                break;
            }
		}
		cout<<mx<<"\n";
	}
	return 0;
}
