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

    int N; cin>>N; int cs=0;
    while(N--){
        int C, R; cin>>C>>R;
        int eaten = C-R;
        if(C==R){cout<<"Case #"<<++cs<<": 0"<<endl; continue;}
        set<int> divisors; //sorting a vector works just as fine
        for(int Q=1; Q*Q<=eaten ;Q++){
            if(eaten%Q==0) {
                if(Q>R) divisors.insert(Q);
                int div = eaten/Q;
                if(div!=Q and div>R) divisors.insert(div);
            }
        }
        cout<<"Case #"<<++cs<<":";
        for(int x: divisors) cout<<" "<<x; cout<<endl;
    }

    return 0;
}






