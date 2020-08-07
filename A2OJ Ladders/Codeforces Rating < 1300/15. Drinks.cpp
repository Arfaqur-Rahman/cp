#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, int> m;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int N=n;
    double s=0;
    while(n--){
        double x;
        cin>>x;
        s+= x/100.0;
    }
    
    cout<<fixed<<setprecision(16)<< s/N*100.0;
}
