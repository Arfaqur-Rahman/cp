#include<bits/stdc++.h>
using namespace std;



int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        int a, b; cin>>a>>b;
        int mx1=0, mx2=0, min1=INT_MAX, min2=INT_MAX;

        int at1=a%10;
        int at2=a/10;

        int bt1=b%10;
        int bt2=b/10;

        if(at2!=0 && at2<bt1) mx1=bt1*10+at1+ bt2*10+at2;

        if(bt2!=0 && bt2<at1) mx2=at1*10+bt1+ at2*10+bt2;

        cout<<max({mx1, mx2, a+b})<<endl;
    }
}
