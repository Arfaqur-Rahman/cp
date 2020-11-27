#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t; cin>>t;

    for(int tc=1; tc<=t; tc++){

        int n; cin>>n;

        map<string, int> m;
        vector<string> v(n);
        for(string& x: v) {
            cin>>x;
            for(int i=0; i<x.size(); i++){
                string temp = x.substr(0, x.size()-i);
                //cout<<temp<<endl;
                m[temp]++;
            }
        }

        bool b=true;
        for(string x: v){
            if(m[x]>1){b=false; break;}
        }

        cout<<"Case "<<tc<<": "<< (b ? "YES": "NO")<<endl;
    }
}
