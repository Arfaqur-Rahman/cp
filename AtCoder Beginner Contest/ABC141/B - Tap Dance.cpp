#include <bits/stdc++.h>

using namespace std;

int main()
{
    int e=0,d=0;
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if( ((i+1)%2==0) && (s[i]=='L' || s[i]=='U' || s[i]=='D') )e++;
      	else if ( ((i+1)%2!=0) && (s[i]=='R' || s[i]=='U' || s[i]=='D') )e++;
      	else d++;
    }
    if(e && d==0)cout<< "Yes";
  	else cout<<"No";
    return 0;
}
