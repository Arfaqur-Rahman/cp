#include <iostream>

using namespace std;

int main() {
    int c=0, l=0;
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z') c++;
        if(s[i]>='a' && s[i]<='z') l++;
	}
	cout<<c<<" "<<l;
	return 0;
}
