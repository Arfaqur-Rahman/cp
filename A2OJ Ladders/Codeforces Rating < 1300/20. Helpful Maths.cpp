#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin>>s;
	if(s.length()==1){cout<<s; return 0;}
	string s2;
	s2+=s[0];
	for(int i=2; s[i]; i++) if(s[i]!='+') s2 += s[i];
	sort(s2.begin(),s2.end());
	for(int i=0; i<s2.length()-1; i++) cout<<s2[i]<<"+";
    cout<<s2[s2.length()-1];
	return 0;
}
 
