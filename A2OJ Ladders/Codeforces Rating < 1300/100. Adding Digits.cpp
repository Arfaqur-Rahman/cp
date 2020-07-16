#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n;
    cin>>a>>b>>n;

    for(int i=0; i<=9; i++){
        if( (10*a + i) % b == 0 ){
            cout<<a<<i;
            for(int j=1; j<n; j++) cout<<0;
            return 0;
        }
    }
    cout<<-1;

}
