#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')c++;
    }
    cout<<c;
    return 0;
}
