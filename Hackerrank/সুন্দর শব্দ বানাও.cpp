#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/contests/dcc-programming-contest-3/challenges/challenge-2618

int main(){
    int n, m;
    cin>>n>>m;
    cin.ignore();
    string s;
    getline(cin, s);

    stringstream ss(s);
    string x;
    int w=0;
    vector<int> v;
    while(ss>>x){
         int c=0;

        if(islower(x[0]) ) {c++; }

        for(int i=1; x[i] ; i++) if(isupper(x[i])) {c++; }

        if(c!=0 )v.push_back(c);
    }
    
    int cnt=0;
    sort(v.begin(), v.end());
    for(int vv: v){
        cnt+=vv; //cout<<vv<<endl;
        if(cnt<=m) w++;
    }
    cout<<w<<endl;
}
