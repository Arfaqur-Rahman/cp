#include <iostream>

using namespace std;

int main() {
	string s="Fever";
	string s1; cin>>s1;
	cout<<(s.compare(s1)? "Go to hospital." : "Go to hospital right now.");
	return 0;
}
