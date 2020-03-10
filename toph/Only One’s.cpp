#include <iostream>

using namespace std;

int main() {
	long long a, b, s=0; cin>>a>>b; long long ab=a*b;
	while(ab!=0){
        cout<<ab%10+1;
        ab/=10;
	}
	return 0;
}
