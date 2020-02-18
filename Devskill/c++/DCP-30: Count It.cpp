#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0; s[i]!='\0';i++){
                m[s[i]]++;
        }
        cout<<"Case "<<j<<":"<<endl;
        for (auto itr=m.begin(); itr!=m.end(); itr++) {
           cout << itr->first << " " << itr->second<< endl;
        }
    }
}
