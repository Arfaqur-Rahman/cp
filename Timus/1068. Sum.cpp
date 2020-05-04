#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    int ans= (abs(t)*(abs(t)+1))/2;
    cout<<(    t<=0? 1+ans*(-1) : ans  )<<endl;
}
