#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        map<long long, int> m;
        while(a--){
            int n; cin>>n; m[n]++;
        }
        while(b--){
            int n; cin>>n; m[n]--;
        }
        int s=0;
        for(auto itr=m.begin(); itr!=m.end(); itr++) s+=abs(itr->second);
        cout<<s<<"\n";
    }
}

