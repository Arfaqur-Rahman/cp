#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    for(int z=0;z<n;z++){
            int r, c,g=0;
            cin>>r>>c;
            char m[r][c];
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cin>>m[i][j];
                }
            }
            cout<<"Case "<<z+1<<":"<<endl;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(m[i][j]=='$'){cout<<i+1<<","<<j+1<<endl;}
                    else g++;
                }
            }
            if(g==(r*c))cout<<"No Gold Found"<<endl;
        }
}

