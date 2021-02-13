
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin>>t;
    while(t-- ){
        ll s,d; cin>>s>>d;
        if(s<d) cout<<"impossible\n";
        else {
            ll a=(s+d)/2;
            ll  b=s-a;
            ll ma=max(a, b);
            ll mb=min(a, b);
            if(ma+mb==s && ma-mb==d )cout<<ma<<" "<<mb<<endl;
            else cout<<"impossible\n";
        }
    }

}

/*
4
0 0
0 1
1 0
1 1


0 0
impossible
impossible
1 0
*/
