#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(),(x).end()


int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n; cin.ignore();
        int pos=0;
        map<int, string> m;
        for(int i=1; i<=n; i++){
            string s; getline(cin, s);
            if(s=="LEFT") {m[i]=s; pos--;}
            else if(s=="RIGHT") {m[i]=s; pos++;}
            else{
                //same as sth
                int ind=0;
                for(int j=8; j<s.size(); j++) {ind = ind*10 + (s[j]-'0'); }
                m[i]=m[ind];
                if(m[ind]=="LEFT") pos--;
                else pos++;
            }
        }
        cout<<pos<<endl;
    }

    return 0;
}





