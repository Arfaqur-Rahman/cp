#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;

    int t;
    int k;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        switch(n){
        case 1:
            cin>>k;
            s.insert(k);
            break;
        case 2:
            cin>>k;
            s.erase(k);
            break;
        case 3:
            cin>>k;
            set<int>::iterator itr=s.find(k);
            if(itr==s.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
             break;
        }
    }

    return 0;
}

