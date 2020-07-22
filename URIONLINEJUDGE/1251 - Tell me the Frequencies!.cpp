#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{   if(p1.first==p2.first){
        if(p1.second> p2.second) return p1.second>p2.second;
        else p1.second<p2.second;
    }
    return (p1.first < p2.first);
}

map<char , int> m;
vector< pair<int, int> > v;


int main(){
    string s;
    bool b= false;
    while(getline(cin, s)){
        if(b) cout<<endl;

        for(char x: s) m[x]++;

        for(auto x: m) v.push_back( { x.second, (int)x.first} );
        sort(v.begin(), v.end(), compare);
        for(auto x: v) cout<<x.second<<" "<<x.first<<endl;

        m.clear();
        v.clear();

        b=true;
    }
}
