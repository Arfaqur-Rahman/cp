#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
int main(){
    FAST;

    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int al= a.length()-1; bool bo=true;
        for(int i=b.length()-1; i>=0; i--){
            if(b[i]!=a[al]) { bo= false; break;}
            al--;
        }
        cout<<(bo? "encaixa": "nao encaixa")<<endl;
    }
}
