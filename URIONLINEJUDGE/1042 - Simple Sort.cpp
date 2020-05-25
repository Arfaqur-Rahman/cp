#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(3), u(3);
    for(int i=0; i<3; i++) cin>>v[i];
    u=v;
    sort(v.begin(), v.end());
    for(int x: v) cout<<x<<endl;
    cout<<endl;
    for(int x: u) cout<<x<<endl;
    return 0;
}
