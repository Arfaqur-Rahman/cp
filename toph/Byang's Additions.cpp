#include <iostream>

using namespace std;

int main() {
	int n, m; cin>>n>>m;
	
	while(m!=0 || n!=0){
		if(n%10 + m%10 >9) {cout<<"Yes"; return 0;}
		n/=10; m/=10;
	}
	cout<<"No";
	return 0;
}
