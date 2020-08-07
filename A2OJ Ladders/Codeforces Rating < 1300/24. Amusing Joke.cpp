#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, int> m;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    string s1, s2, s3;
    cin>>s1>>s2>>s3;

 
    for(char x: s3) m[x]++;

    for(char x: s2){
        if(m[x]){
            m[x]--;
        }else {
            cout<<"NO"; return 0;
        }
    }

    for(char x: s1){
        if(m[x]){
            m[x]--;
        }else {
            cout<<"NO"; return 0;
        }
    }

    for(auto x: m){
        if(x.second>0) {cout<<"NO"; return 0;}
    }
    cout<<"YES";
}
