
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, m;
    int f=0;
    bool b=false;
    while(cin>>n>>m){
        if(n==0 && m==0) break;
        if(b) cout<<endl;
        cout<<"Field #"<<++f<<":"<<endl;
        char a[n][m];

        int aa[n][m];
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) {cin>>a[i][j]; aa[i][j]=0;}

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                 if(a[i][j]=='*'){
                    aa[i][j]++;
                    if(j-1>=0) aa[i][j-1]++;
                    if(j+1<m) aa[i][j+1]++;
                    
                    //up
                    if(i-1>=0 ) aa[i-1][j]++;
                    if(i-1>=0 && j-1>=0) aa[i-1][j-1]++;
                    if(i-1>=0 && j+1<m ) aa[i-1][j+1]++;

                    //do
                    if(i+1<n ) aa[i+1][j]++;
                    if(i+1<n && j-1>=0 ) aa[i+1][j-1]++;
                    if(i+1<n && j+1<m ) aa[i+1][j+1]++;
                }
            }
        }

        for(int i=0; i<n; i++){
             for(int j=0; j<m; j++){
                 if(a[i][j]=='*') cout<<'*';
                 else cout<<aa[i][j];
             }
             cout<<endl;
        }
        
        b=true;
    }


}

