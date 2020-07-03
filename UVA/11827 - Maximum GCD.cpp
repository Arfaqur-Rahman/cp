#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        int a;
        getline(cin, s);
        stringstream ss(s);
        vector<int> v;
        while(ss>>a) v.push_back(a);
        int mx=0;
        for(int i=0; i<v.size()-1; i++) for(int j=i+1; j<v.size(); j++) mx=max(mx, __gcd(v[i], v[j]));
        cout<<mx<<endl;
        v.clear();
    }
}
