#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n, s=0, mn=1000000000;
		cin>>n;
		int a[n];
	    for(int i=0; i<n; i++){
            cin>>a[i];
	    s+=a[i];
            mn=min(a[i],mn);
            }
            cout<<s-mn*n<<endl;
        }
        
	return 0;
}
