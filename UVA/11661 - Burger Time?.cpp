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

    int L;
    while(cin>>L and L!=0){
        string s; cin>>s;
        map<char, int> m;
        int mini = INT_MAX;
        int lastR=-1;
        int lastD=-1;
        for(int i=0; i<L; i++){
            if(s[i]=='Z'){mini = 0; break;}
            if(s[i]=='.') continue;
            if(s[i]=='R') lastR=i;
            if(s[i]=='D') lastD=i;
            if(lastD!=-1 and lastR!=-1) mini = min(mini, abs(lastR-lastD));
        }
        cout<<mini<<endl;
    }

    return 0;
}





