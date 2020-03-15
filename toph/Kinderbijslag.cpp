#include <iostream>

using namespace std;

int main() {
	int t, k=0; cin>>t; while(t--){float a, b, c; cin>>a>>b>>c; cout<<"Case "<< ++k <<": "<<( (a*100-b*c)>=0 ? "YES": "NO" )<<endl;}
	return 0;
}
