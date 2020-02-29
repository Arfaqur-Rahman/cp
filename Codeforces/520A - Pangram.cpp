#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<char> s;
    while(n--){
        char m;
        cin>>m;
        m=tolower(m);
        s.insert(m);
    }
    cout<<(s.size()==26 ? "YES": "NO");
}

