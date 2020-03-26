#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int c=0;
		for(int i=0; i<n-2; i++){
			if(a[i][0]=='F' && a[i+1][0]=='F' && a[i+2][0]=='T' ) c++;
		}
		cout<<c<<endl;
		for(int i=0; i<n-2; i++){
			if(a[i][0]=='F' && a[i+1][0]=='F' && a[i+2][0]=='T' ) cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
		}
	}
	return 0;
}
