#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=1; j<=t; j++){
        int mx=-1e9;
		vector<pair<string,int>> v(5);
		for(int i=0; i<5; i++){
			string s; int n;
            cin>>s>>n;
            mx= max(mx,n);
			v[i]=make_pair(s,n);
		}
		for(int i=0; i<5; i++){
			if(v[i].second == mx){
                cout<<"Case "<<j<<": "<<v[i].first<<endl;
                break;
            }
		}

	}
	return 0;
}
