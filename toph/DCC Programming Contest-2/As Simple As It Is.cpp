#include <bits/stdc++.h>

using namespace std;
//n(n3+2n2+3n+2)8
int main() {

	int a, b, c, d;
	scanf("%dn+%d", &a, &b);
	//cout<<a<<" "<<b<<'\n';
	scanf("%dn+%d", &c, &d);
	//cout<<c<<" "<<d;

	for(int i=1; i<10000; i++){
        if( __gcd(a*i+b, c*i+d)!=1 ){
            cout<<"Yes"; return 0;
        }
	}
	cout<<"No";
	return 0;
}
