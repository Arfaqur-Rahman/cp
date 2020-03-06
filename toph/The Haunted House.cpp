#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n;i++){
        string s;
        cin>>s;
        for(int j=s.length()/2 - 1; j>=0; j--) cout<<s[j];
        cout<<endl;
	}
	return 0;
}
