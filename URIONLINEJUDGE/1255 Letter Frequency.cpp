#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; getchar();
    while(t--){
        string s;
        getline(cin,s);
        map<char, int> m;
        int mx=-1;
        for(int i=0; s[i]; i++){
            if(s[i]==' ') continue;
            m[tolower(s[i])]++;
        }
        for(auto itr=m.begin(); itr!=m.end(); itr++){
            mx=max(mx,itr->second);
        }
        for(auto itr=m.begin(); itr!=m.end(); itr++){
            if(itr->second==mx) cout<<itr->first;
        }
        cout<<endl;
    }
    return 0;
}

