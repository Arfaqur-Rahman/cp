#include<bits/stdc++.h>
using namespace std;
int main(){
string s; cin>>s; int c=0;
for(int i=0;i<s.length()/2;i++){
 if(s[i]!=s[s.length()-1-i])c++;
}
cout<<c;
}
