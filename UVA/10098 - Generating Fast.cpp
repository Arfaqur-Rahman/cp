#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        char s[10];
        cin>>s;
        int l=strlen(s);
        sort(s,s+l);
        cout<<s<<endl;
        while(next_permutation(s,s+l)){
            cout<<s<<endl;
        }
        cout<<endl;
    }
}
