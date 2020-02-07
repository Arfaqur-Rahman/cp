
#include<bits/stdc++.h>
using namespace std;
main(){
    long long int h,x=1,t=1;
    cin>>h;
    while(h>1){
        h/=2;  
        t*=2;
        x+= t;
    }
    cout<<x;
}
