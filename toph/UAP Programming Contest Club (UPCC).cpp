#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin>>t; while(t--){string s; cin>>s;  int u=0, p=0, c=0; for(int i=0; s[i]; i++){ if(s[i]=='U')u++; else if(s[i]=='P')p++; else if(s[i]=='C')c++; } cout<< min(u, min( p, c/2)) <<endl; }
	return 0;
}
