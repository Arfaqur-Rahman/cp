#include <iostream>

using namespace std;

int main() {
    string s; cin>>s;
    int c=0;
   // for(int i=1; s[i]!='\0';i++){
    for(int i=0; i<s.length()/2;i++){
        if(s[i]!= s[s.length()-i-1]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
	return 0;
}
