#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    while(cin>>t && t){
        int distinct = 0, sum=0, incur=0;
        map<char, int> m;
        set<char> st;
        while(t--){
            char c;
            int n;
            string s;
            cin>>c>>n>>s;
            if(s=="incorrect") {
                m[c]--;
            }
            else if(s=="correct") {
                if(st.count(c)!=1) sum+= (n + abs(m[c])*20 );
                st.insert(c);
            }
        }
        cout<<st.size()<<" "<<sum<<endl;
    }

    return 0;
}
