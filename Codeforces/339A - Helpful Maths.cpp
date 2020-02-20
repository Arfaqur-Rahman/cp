#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1; cin>>s;
    int u=0, l=0;
    for(int i=0;i<s.size();i+=2){
        s1+=s[i];
    }
    sort(s1.begin(), s1.end());
    string s3;
    s3+=s1[0];
    for(int i=1;i<s1.size();i++){
        s3+='+';
        s3+=s1[i];
    }
    cout<<s3;
   
}
