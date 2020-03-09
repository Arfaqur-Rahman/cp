#include <iostream>

using namespace std;

int main() {
	int h=1000000, l=0; 
	int t=25; 
	while(t--){
		int mid=(h+l)/2; 
		cout<<mid<<endl; 
		string s;	
		cin>>s; 
		if(s=="Bingo!") return 0;
		else if(s=="Bigger") l=mid+1;
		else h=mid-1;
	}
	return 0;
}
