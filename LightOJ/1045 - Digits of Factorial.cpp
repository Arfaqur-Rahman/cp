#include<bits/stdc++.h>
using namespace std;
double a[1000000];
void logvalue(){
    for(int i=1; i<=1e6; i++) a[i]= a[i-1]+log10(i);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    logvalue();
    
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        long long n, b;
        cin>>n>>b;

        cout<<"Case "<<i<<": "<< (int) floor(a[n] /log10(b))+1 <<endl;
    }
}
