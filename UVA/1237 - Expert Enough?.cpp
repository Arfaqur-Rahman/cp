#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> a;
main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string maker[n];
        int high[n], low[n];
        for(int i=0; i<n; i++){
            cin>>maker[i]>>low[i]>>high[i];
        }
        int k;
        cin>>k;
        while(k--){
            int p, c=0, index;
            cin>>p;
            for(int i=0; i<n; i++){
                if(p>=low[i] && p<=high[i]) c++, index=i;
            }
            if(c==0 || c>1 ) cout<<"UNDETERMINED"<<endl;
            else cout<<maker[index]<<endl;
        }
        if(t) cout<<endl;
    }
}
