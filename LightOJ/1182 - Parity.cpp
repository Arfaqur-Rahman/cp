#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int Ones(int n){
    int c=0;
    while(n>0){
        if( n & 1) c++;
        n/=2;
    }
    return c;
}

int main() {
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); //  -> This causes runtime error. Don't know why!

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){

        int n;
        cin>>n;

        cout<<"Case "<<i<<": "<<( Ones(n) & 1 ? "odd" : "even")<<endl;
    }
}
