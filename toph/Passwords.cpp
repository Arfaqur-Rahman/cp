#include <iostream>

using namespace std;

int main() {
	string s;
	while(cin>>s){
        int sm=0, c=0, d=0, count=0;
        for(int i=0; s[i]!='\0';i++){
            if(s[i]>='a' && s[i]<='z') sm++;
            if(s[i]>='A' && s[i]<='Z') c++;
         //sm++;
            if(s[i]>='0' && s[i]<='9') d++;
            if(c && d && sm){
                count++; c=0; sm=0; d=0;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
