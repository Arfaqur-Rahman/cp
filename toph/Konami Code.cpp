#include <iostream>

using namespace std;

int main() {
	string s; cin>>s; int c=0; for(int i=0; s[i]; i++) if(s[i]=='U' && s[i+1]=='U' && s[i+2]=='D' && s[i+3]=='D' && s[i+4]=='L'&& s[i+5]=='R'&& s[i+6]=='L'&& s[i+7]=='R'&& s[i+8]=='B'&& s[i+9]=='A' ) c++; cout<<c; 
	return 0;
}
