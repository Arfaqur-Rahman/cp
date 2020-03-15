#include <bits/stdc++.h>

using namespace std;
int d(int n){
	int c=0;
	while(n!=0){
		c+=n%10;
		n/=10;
	}
	return c;
}

int main() {
	int t, c=0; cin>>t; while(t--){int n; cin>>n; string s= to_string(n); cout<<"Case "<<++c<<": "<<( ( ( d(n)%2 && s.length()%2 ) || ( d(n)%2==0 && s.length()%2==0 ) ) ? "Safe to push" : "BOOM" )<<endl; }
	return 0;
}
