#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n), u(n);
    for(int i=0; i<n; i++) cin>>v[i]>>u[i];
    int c=0;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) c+=(v[i]==u[j]);
    cout<<c;
	return 0;
}

