#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    while(cin>>n){
        multiset<int> m;
        for(int i=0; i<n; i++){int x; cin>>x; m.insert(x);}

        int first=*m.rbegin();
        for(int i=1; i<=first; i++){
             if(first%i==0)m.erase(m.find(i));
        }
        
        cout<<first<<" "<<*m.rbegin()<<endl;
    }
}
