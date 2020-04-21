#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,  c=0, x=0; cin>>n;
    for(int i=1; x<=n ; i++){
        x+= (i*(i+1))/2;
        c++;
    }
    cout<<c-1<<endl;
}

