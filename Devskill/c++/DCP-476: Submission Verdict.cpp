
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s=="ac") cout<<"Accepted"<<endl;
		else if(s=="wa") cout<<"Wrong Answer"<<endl;
		else if(s=="rte") cout<<"Run Time Error"<<endl;
		else cout<<"Time Limit Exceeded"<<endl;
	}
	return 0;
}
