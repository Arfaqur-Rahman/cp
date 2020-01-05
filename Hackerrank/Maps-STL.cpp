#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;

    int t;
    string s;
    int k;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        switch(n){
        case 1:
            cin>>s>>k;
            m[s]+=k;
            break;
        case 2:
            cin>>s;
            m[s]=0;
            break;
        case 3:
            cin>>s;
            cout<<m[s]<<endl;
             break;
        }
    }

    return 0;
}

