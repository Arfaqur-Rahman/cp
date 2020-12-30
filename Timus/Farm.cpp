#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int n; cin>>n;

    for(int i=1; i<=100; i++){
        for(int j=i+1; j<=100; j++){
            for(int k=j+1; k<=100; k++){
                if( pow(i, n) + pow(j, n)== pow(k, n) ) return cout<<i<<" "<<j<<" "<<k<<endl, 0;
            }
        }
    }

    cout<<-1;
}
