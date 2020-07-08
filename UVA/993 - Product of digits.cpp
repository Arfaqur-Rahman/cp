#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<9){
            cout<<n<<endl;
            continue;
        }
        string s;
        int i=9;
        while(i>1 && n>1){
            if(n%i==0){
                while(n%i==0){
                    n/=i; //cout<<i<<" "<<n<<endl;
                    s+= '0'+i;
                }
            }
            i--;
        }
        reverse(s.begin(), s.end());
        if(n==1) cout<<s<<endl;
        else cout<<-1<<endl;
    }
}
