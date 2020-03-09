#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, p=0;
	cin>>t;
	while(t--){
		int a, b, c, n;
		cin>>a>>b>>c>>n;
		if(b-a == c-b) cout<< "Case "<<++p<<": "<< a+(n-1)*(b-a)<<endl;
		else cout<<"Case "<<++p<<": "<<"Error"<<endl;
	}
	return 0;
}

