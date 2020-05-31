#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    unordered_set<int> us={1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
47045881, 64000000, 85766121};
    int n;
    while(cin>>n && n){
        if( us.count(n)==1 ) cout<<"Special"<<endl;
        else cout<<"Ordinary"<<endl;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    while(cin>>n && n){
        int temp3=cbrtl(n);
        
        int temp2=sqrtl(n); 
      
        if( temp3*temp3*temp3==n && temp2*temp2==n ) cout<<"Special"<<endl;
        else cout<<"Ordinary"<<endl;
    }
}
*/
