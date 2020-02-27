#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0; cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        c+= (b-a)>=2;
    }
    cout<<c;
}
