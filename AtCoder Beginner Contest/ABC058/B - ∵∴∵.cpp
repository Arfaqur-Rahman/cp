#include<iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0; s1[i]!='\0';i++){
    	if(s1[i])cout<<s1[i];
    	if(s2[i])cout<<s2[i];
    }
}
