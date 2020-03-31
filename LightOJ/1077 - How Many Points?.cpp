#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){ if(b==0)return a; return gcd(b,a%b); }

int main(){
    int t;
    cin>>t;
   for(int i=1; i<=t; i++){
        long long x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<i<<": "<<gcd(abs(x1-x2),abs(y1-y2))+1<<endl;
    }
}
