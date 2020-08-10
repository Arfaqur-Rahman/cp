#include <bits/stdc++.h>
using namespace std;
map<char, int> m;
main(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    for(char x: s) m[x]++;

    for(auto x: m) if(x.second%n) return cout<<-1, 0;

    for(int i=0; i<n; i++){
        for(auto x: m){
            int l= x.second/n;
            while(l--) cout<<x.first;
        }
    }
}

