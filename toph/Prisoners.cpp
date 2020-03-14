#include <iostream>

using namespace std;

int main() {
	int t; 
	cin>>t; 
	while(t--){
		int n; 
		double s=0.0; 
		cin>>n; 
		for(int i=0; i<n; i++){ 
			double k; 
			cin>>k; 
			s+=k; 
		} 
		printf("%lf\n",s/n);
	}
	return 0;
}
