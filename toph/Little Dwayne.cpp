#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int d, k, s=0;
		cin>>d>>k;
		while(d--){
			int n; 
			cin>>n;
			if(n>k)s+= n-k;
		}
		cout<<s<<"\n";
	}
	return 0;
}
