#include <iostream>

using namespace std;

int main() {
	string s; cin>>s;
	s[0]=s[0]-'a'+'A';
	cout<<s[0];

    for(int i=1; s[i]!='\0';i++){
        if(s[i]=='s') cout<<"$";
        else if(s[i]=='i') cout<<"!";
        else if(s[i]=='o') cout<<"()";
        else cout<<s[i];
    }
    cout<<".";
	return 0;
}
