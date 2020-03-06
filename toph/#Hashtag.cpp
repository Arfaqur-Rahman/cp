#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin,s);
     for(int i=0; s[i]!='\0'; i++){
        if(s[i]==' ') continue;
        else cout<<s[i];
     }
	return 0;
}

