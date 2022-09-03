#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(),(x).end()


int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a, b;
    while(cin>>a>>b){
        if(a==-1 and b==-1) break;
        cout<<min(abs(b-a), min(100-b+a, 100-a+b))<<endl;
    }

    return 0;
}






