#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    unordered_set<string> us;
    while(t--){
        string s;
        cin>>s;
        if(us.count(s)==1) cout<<"YES\n";
        else{
            us.insert(s);
            cout<<"NO\n";
        }
    }

}
