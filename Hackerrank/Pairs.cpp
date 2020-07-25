#include <bits/stdc++.h>
// https://www.hackerrank.com/challenges/pairs/problem
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n);

    for(int& x: v) cin>>x;

    sort(v.begin(), v.end());

    int c=0;
    for(int i=0; i<v.size(); i++){
        if(binary_search(v.begin(), v.end(), v[i]+ k)) c++;
    }
    cout<<c<<endl;

}


