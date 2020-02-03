#include<bits/stdc++.h>
using namespace std;
main(void){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        s.insert(m);
    }
    cout<<s.size();
}
