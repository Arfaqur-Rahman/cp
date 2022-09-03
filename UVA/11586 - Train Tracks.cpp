#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(),(x).end()

// https://tanjim131.github.io/2020-05-26-uva-11586/

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin>>t; cin.ignore();
    while(t--){
        string s; getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        string w;
        while(ss>>w) v.pb(w);
        
        int fm=0, mf=0, ff=0, mm=0;
        for(auto x: v){
            if(x=="FF") ff++;
            else if(x=="MM") mm++;
            else if(x=="MF") mf++;
            else fm++;
        }
        
        if(mm!=ff) cout<<"NO LOOP"<<endl;
        else if(mm==0 and ff==0){
            if((mf==0 and fm>1) or (fm==0 and mf>1)) cout<<"LOOP"<<endl;
            else cout<<"NO LOOP"<<endl;
        }
        else cout<<"LOOP"<<endl;

    }

    return 0;
}





