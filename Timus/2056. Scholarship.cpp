//pq custom
#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int n; cin>>n;

    float s=0;
    bool ex=true; 
    bool c=false;

    for(int i=0; i<n; i++){
        float x; cin>>x;
        if(x!=5) ex=false;
        if(x<=3.0) c=true;
        s+=x;
    }

    float f=s/n*1.0;

    if(ex)  cout<<"Named\n";
    else if(c) cout<<"None\n";
    else if( f>=4.5) cout<<"High\n";
    else cout<<"Common\n";


}







