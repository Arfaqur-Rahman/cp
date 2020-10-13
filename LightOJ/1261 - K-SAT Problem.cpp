#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin>>t; int tc=0;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        int a[n][k];
        for(int i=0; i<n; i++) for(int j=0; j<k; j++) cin>>a[i][j];

        int p; cin>>p;
        unordered_set<int> st;
        for(int i=0; i<p; i++){int x; cin>>x; st.insert(x);}

        bool oops=true;
        for(int i=0; i<n; i++){
            bool b=false;
            for(int j=0; j<k; j++){ 

                if(a[i][j]> 0 && st.count(a[i][j])==1 ) {b=true; break;}
                else if(a[i][j]<0 && st.count( abs(a[i][j]))==0){b=true;}
            }
            if(b==false){cout<<"Case "<<++tc<<": "<<"No"<<endl; oops=false; break;}
        }
        if(oops)cout<<"Case "<<++tc<<": "<<"Yes"<<endl;

    }

}
