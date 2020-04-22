#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
    cin.tie(0);
	ios::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;
    char a[n][m];
    int rmax = -inf, rmin= inf, cmax=-inf, cmin= inf;
    for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            char c;
            cin>>c;
            a[i][j]=c;
            if(c=='*'){
                rmax= max(rmax, i);
                cmax= max(cmax, j);
                rmin = min( rmin, i);
                cmin = min( cmin, j);
            }
         }
    }


    for(int i=rmin; i<=rmax; i++){
        for(int j=cmin; j<=cmax; j++){
             cout<<a[i][j];
        }
        cout<<endl;
    }
}
