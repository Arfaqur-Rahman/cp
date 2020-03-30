#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
        string s; 
		int s1l=0, s2l=0;
        vector<char> s1, s2;
        cin>>s;
        for(int i=0; s[i]; i++) (isdigit(s[i])) ? s1.push_back(s[i]) : s2.push_back(s[i]);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for(int i=0; s[i]; i++) cout<<(isdigit(s[i]) ? s1[s1l++] : s2[s2l++] );
        cout<<endl;
	}
	return 0;
}


