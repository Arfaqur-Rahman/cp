// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1904

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> st;
        while(n--){
            int a, b; cin>>a>>b;
            st.insert(a-b);
        }
        cout<<(st.size()==1 ? "yes": "no")<<'\n';
        if(t) cout<<endl;
    }
}
