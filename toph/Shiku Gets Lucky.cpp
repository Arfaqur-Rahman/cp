#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		bool b=false;
		int sz;
		cin>>sz;
		map<char,int> m;
		for(int j=0; j<sz; j++){
			char c;
			cin>>c;
			m[c]++;
		}
		for(auto itr=m.begin(); itr!=m.end(); itr++){
			if(itr->second > sz/2) {
				b=true;
				break;
			}
		}
		cout<<( b ? "1" : "0" )<<endl;
		
	}
	return 0;
}
