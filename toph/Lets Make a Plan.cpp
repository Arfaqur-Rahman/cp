#include <iostream>

using namespace std;

int main() {
	int t; cin>>t; while(t--){ string s1, s2, s3, s4; cin>>s1>>s2>>s3>>s4; cout<<( (s1==s3 || s2==s4 || s1==s4 || s2==s3) ? "Possible":"Oh no!, such a shame")<<endl;}
	return 0;
}
