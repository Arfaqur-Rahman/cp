#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
		unsigned long long int a,b;
		cin>>a>>b;
		if(a==b) cout<<a<<endl;
		else if(a>b){
			cout<<(a-b)/2+b<<endl;
		}else{
			cout<<(b-a)/2+a<<endl;
		}

	}
	return 0;
}
