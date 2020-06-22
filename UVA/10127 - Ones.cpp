#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

#define sc(n) scanf("%lld",&n)
#define scc(n1,n2) scanf("%lld %lld",&n1,&n2)
#define sccc(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define debug(x) cerr<<#x<<": "<<x<<endl;

// https://www.mathblog.dk/uva-10127-ones/
signed main() {
    FAST;
    int n;
    while(cin>>n){
        unsigned long long sum=1;
        int c=1;
        while(1){
            if(sum%n==0 ) break;
            sum = (sum*10 + 1)%n; // https://codingstrife.wordpress.com/2013/07/28/solution-uva10127-pc110504-ones/
            c++;
        }
        cout<<c<<endl;
    }
}

