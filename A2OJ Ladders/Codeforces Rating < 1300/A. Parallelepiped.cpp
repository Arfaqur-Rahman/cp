// https://imgur.com/a/NNCku0u

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    double a, b, c;
    cin>>a>>b>>c;
    cout<<4*( sqrt(a*c/b) + sqrt(a*b/c) + sqrt(b*c/a) )<<endl;
}
