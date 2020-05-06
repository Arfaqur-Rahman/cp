#include<bits/stdc++.h>
using namespace std;
// 1 12 123 1234 12345 ...
// (0 1 1)   (0 1 1) (0 1 1) ...
// each triad contains 2 1s
int main(){
    int t;
    cin>>t;
   for(int i=1; i<=t; i++){
        int a, b;
        cin>>a>>b;
        a--; // the range includes a itself. So we are excluding a!

        if(a%3==2) a=a/3*2 +1;
        else a=a/3*2;
        if(b%3==2) b=b/3*2 +1;
        else b=b/3*2;
        cout<<"Case "<<i<<": "<<b-a<<endl;
    }
}
