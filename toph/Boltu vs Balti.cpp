#include <iostream>

using namespace std;

int main() {
	long long a, b, m, n; while(cin>>m>>n){ a=min(m,n); b=max(m,n); cout<<"Sum of "<<a<<" to "<<b<<" is -> "<<b*(b+1)/2 - a*(a+1)/2+a<<";"<<endl;}
	return 0;
}
