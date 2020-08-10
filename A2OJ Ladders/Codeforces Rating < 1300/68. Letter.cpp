#include <bits/stdc++.h>
using namespace std;
map<char, int> m1, m2;
main(){
    string s;
    getline(cin, s);
    for(auto x: s) if(!isspace(x)) m1[x]++;
    
    string t;
    getline(cin, t);
    for(auto x: t) if(!isspace(x)) m2[x]++;

    if(m2.size()>m1.size()) return cout<<"NO", 0;

    for(auto x: m2) if(m1[x.first] < x.second) return cout<<"NO", 0;

    cout<<"YES";
}

