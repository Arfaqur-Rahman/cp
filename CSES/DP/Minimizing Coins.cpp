
#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(),(x).end()
 
#define log(args...){ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cout<<endl; }
 
 
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << " ";
	err(++it, args...);
}
 
// cph 7.1
 
int f(int target, vi& coins, vi& dp){
    if(target<0) return 2e9;
    if(target==0) return 0;
    if(dp[target]!=-1) return dp[target];
    int mini=2e9;
    for(int i=0; i<coins.size(); i++){
       mini = min(mini, f(target-coins[i], coins, dp)+1);
    }
    return dp[target]= mini;
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    int n, x; cin>>n>>x;
    vi coins(n);
    for(int& x: coins) cin>>x;
 
    vi dp(x+1, -1);
    int ans=f(x, coins, dp);
    cout<<(ans==2e9 ? -1: ans)<<endl;;
 
    return 0;
}
 
 
 
