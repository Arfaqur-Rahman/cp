#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int k;
	cin>>s>>k;
	while(k--){
       if(s.back()>'0') s[s.size()-1]--;
       else s.pop_back();
	}
	cout<<s;
	return 0;
}

