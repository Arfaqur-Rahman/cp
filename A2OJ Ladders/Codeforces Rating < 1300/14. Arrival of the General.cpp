#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, int> m;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;

    int mx=INT_MIN;
    int mn=INT_MAX;
    int ii, jj;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        if(x>mx) {mx=x; ii=i;}
        if(x<=mn) {mn=x; jj=i;}
    }
    
    if(ii>jj) cout<<ii-1 + n-jj-1 ;
    else cout<<ii-1 + n-jj;
}
