#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

#define sc(n) scanf("%lld",&n)
#define scc(n1,n2) scanf("%lld %lld",&n1,&n2)
#define sccc(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define debug(x) cerr<<#x<<": "<<x<<endl;

int theWeirdFunction(string s, int mod){
    int n=0;
    for(int i=0; s[i]; i++){
        n= (n*10+ (s[i]-'0') ) % mod;

    }
    return n;
}

signed main() {
    FAST;
    string y; //Nobody told me the numbers would be so big that I gotta use strings!!!
    bool damnEndLineIsAPain=false;
    while(cin>>y){
        bool ordinary=true;

        if(damnEndLineIsAPain) cout<<endl;
        bool lp=false;
        if( theWeirdFunction(y, 400)==0 || (theWeirdFunction(y, 4)==0 && theWeirdFunction(y, 100)!=0) ){ cout<<"This is leap year."<<endl; lp=true; ordinary=false;}
        if(theWeirdFunction(y, 15)==0 ){cout<<"This is huluculu festival year."<<endl; ordinary=false;}
        if( lp && theWeirdFunction(y, 55)==0 ){cout<<"This is bulukulu festival year."<<endl; ordinary=false;}
        if(ordinary){cout<<"This is an ordinary year."<<endl;}
        damnEndLineIsAPain=true;
    }
}

