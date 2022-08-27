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

// https://japlslounge.com/posts/cses/dice_combinations/1.htm

int f(int n, vi &dp){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int pi=0, notp=0;
    for(int i=1; i<=6; i++){
        pi= (pi+f(n-i, dp))%1000000007;
        //dp[n]=pi;
    }
    return dp[n]=pi;

}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin>>n;
    vi dp(n+1, -1);
    cout<<f(n, dp)<<endl;;

    return 0;
}





