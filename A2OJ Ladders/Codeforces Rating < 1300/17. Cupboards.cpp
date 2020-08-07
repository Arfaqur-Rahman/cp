#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, int> m;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;

    int lz=0, lo=0, rz=0, ro=0;
    while(n--){
        int x, y;
        cin>>x>>y;
        if(x==0) lz++;
        else lo++;
        if(y==0) rz++;
        else ro++;
    }
    cout<< min(lo, lz) + min(ro, rz);
}
