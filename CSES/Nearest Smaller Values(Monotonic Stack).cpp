#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>

 /****************** Monotonic Stack *******************/
 // similar to nge (next greater element) -> https://www.youtube.com/watch?v=Dq_ObZwTY_Q
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int n; cin>>n;
    vi v(n);
    for(int& x: v) cin>>x;

    vi ans(n);
    stack<int> st;
    for(int i=0; i<n; i++){
        while(not st.empty() and v[st.top()] >= v[i]) {
            st.pop();
        }

        if(st.empty()) ans[i] = -1; // add 1 later
        else ans[i] = st.top();
        st.push(i);
    }

    for(int x: ans) cout<<x+1<<" ";
}
