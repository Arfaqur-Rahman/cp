#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x1, y1, z1;
    cin>>x1>>y1>>z1;
    t--;
    while(t--){
        int x2, y2, z2;
        cin>>x2>>y2>>z2;
        x1+=x2;
        y1+=y2;
        z1+=z2;
    }
    (x1!=0 || y1!=0 || z1!=0)? cout<<"NO": cout<<"YES";
    return 0;
}
