#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n, m, binary1counter=0;
        cin>>n;
        m=n;
        while(n){
            if(n & 1) binary1counter++;
            n>>=1;
        }

        int hextodecimal = 0;
        for(int i=0; m!=0 ; i++){
            hextodecimal +=  m%10 * pow(16, i);
            m/=10;
        }

        int hexa1counter=0;
        while(hextodecimal){
            if( hextodecimal & 1) hexa1counter++;
            hextodecimal>>=1;
        }
        cout<<binary1counter<<" "<<hexa1counter<<endl;
   }

}
