#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    string s;
    cin>>s;

    int c=0;
    for(auto x: s) if(x=='7' || x=='4') c++;
    cout<<(c==7 || c==4 ? "YES": "NO");
}
