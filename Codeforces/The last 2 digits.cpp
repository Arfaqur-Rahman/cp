// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    long long s= a%100 * b%100 * c%100 * d%100 ;
    if(s%100<10) cout<<0;
    cout<<s%100;
}
