 
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(),(x).end()



// priyansh agarwal video 2/6

int f(int i, int j, vector<vi>& dp, vector<vector<char>>& a){
    if(i==0 and j==0) return a[0][0]=='.'; // this check wouldn't be necessary if a[i][j]=='*' were put first
    if(i<0 or j<0) return 0;
    if(a[i][j]=='*') return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mod = 1e9+7;
    int l =  f(i, j-1, dp, a);
    int u =  f(i-1, j, dp, a);
    dp[i][j] = (l+ u)% mod;
    return dp[i][j];
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin>>n;
    vector<vi> dp(n, vi(n, -1));
    vector<vector<char>> a(n, vector<char> (n, '.'));

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>a[i][j];


    cout<<f(n-1, n-1, dp, a)<<endl;
    return 0;
}






