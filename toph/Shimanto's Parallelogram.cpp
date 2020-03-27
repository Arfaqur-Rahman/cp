#include <iostream>

using namespace std;

string s1="##########";
string s2="#        #";
string s[4]={s1, s2, s2, s1};

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0; i<4; i++){
            for(int j=3; j>i; j--){
                cout<<' ';
            }
            for(int j=0; j<n; j++){
                cout<<s[i];
				if(j!=n-1) cout<<" ";
            }
            cout<<"\n";
        }
    }
	return 0;
}
