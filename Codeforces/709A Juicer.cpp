#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,d,c=0;  long long s=0;
    cin>>n>>b>>d;
    while(n--){
        int m;
        cin>>m;
        if(m>b){
            continue;
        }
        s+=m;
        if(s>d){
            s=0; c++;
        }
    }
    cout<<c;
    return 0;
}
