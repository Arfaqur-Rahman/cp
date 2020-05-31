#include<bits/stdc++.h>
using namespace std;
#define int long long

map<string, int> m;

signed main(){
    int t;
    cin>>t;
    cin.ignore();
    cin.ignore(); // for the blank line input
    while(t--){
        int total=0;
        string s;
        while(getline(cin, s)){
            if(s=="") break;
            m[s]++;
            total++;
        }

        for(auto itr=m.begin(); itr!=m.end(); itr++){
            cout<<fixed<<setprecision(4)<<itr->first<<" "<<(double)itr->second*100/total<<endl;
        }
        m.clear();
        if(t) cout<<endl;
    }
}
