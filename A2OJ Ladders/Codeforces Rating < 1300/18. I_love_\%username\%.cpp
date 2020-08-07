#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, int> m;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;

    int x;
    cin>>x;
    int mn=x;
    int mx=x;

    n--;
    int c=0;
    while(n--){
        cin>>x;
        if(x>mx) {mx=x; c++;}
        else if(x<mn){mn=x; c++;}
    }
    cout<<c;
}
