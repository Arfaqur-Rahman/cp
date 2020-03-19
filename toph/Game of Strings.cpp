#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    set<string> s;
    while(t--){
        string n;
        cin>>n;
        s.insert(n);
    }
    int k, c=0;
    cin>>k;
    for(auto itr=s.begin(); itr!=s.end(); itr++){
        c++;
        if(c>k) break;
        cout<<*itr;
    }
}
