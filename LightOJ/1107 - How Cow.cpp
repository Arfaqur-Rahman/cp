#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cout<<"Case "<<tc<<":"<<endl;
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;

        int m;
        cin>>m;
        while(m--){
            int p, q;
            cin>>p>>q;
            if(p>x1 && p<x2 && q>y1 && q<y2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

}

