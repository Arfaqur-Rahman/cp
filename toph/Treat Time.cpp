#include <iostream>

using namespace std;

int main() {
	int a, b, c; 
	cin>>a>>b>>c; 
	if( (a>=b && a>=c) || (a<b && a<c) ) cout<<"Chocolate";
	else{
		if(a>=b && a<c) cout<<"Chocolate";
		else if(a>=c && a<b) cout<<"Ice-cream";
	}
	return 0;
}
