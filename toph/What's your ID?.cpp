#include <iostream>

using namespace std;

string dept(string s){
	if(s[6]=='5') return "CSE ";
	else if(s[5]=='4') return "EEE ";
	else if(s[6]=='6') return "BBA ";
	else if(s[6]=='7') return "LLB ";
	else if(s[6]=='4') return "English ";
	else return "Economics ";
}

string season(char c){
	if(c=='1') return "Spring ";
	else if(c=='2') return "Summer ";
	else if(c=='3') return "Autumn ";
}

int main() {
	int n; cin>>n; while(n--){ string s; cin>>s; cout<<dept(s)<<season(s[2])<<"20"<<s[0]<<s[1]<<endl;}
	return 0;
}
