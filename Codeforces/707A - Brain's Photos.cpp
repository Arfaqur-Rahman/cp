#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,mn;
    cin>>m>>n;
    mn=m*n;
    while(mn--){
        char c;
        cin>>c;
        if(c=='C'|| c=='M' || c=='Y'){
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
}
