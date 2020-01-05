#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, string> m;
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        m[s1]=s2;
    }
    scanf("%d",&t);
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        cout<<m[s]<<endl;
        //map<string,string>::iterator it;
        //for (auto it = m.begin(); it != m.end(); ++it){
        //for (auto x: m) {
        //    if(x.first==s){
        //        cout<< x.second << '\n';
        //        break;
        //    }
        //}
    }
    return 0;
}

