#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4], mx=-1;
    cin>>a[0]; mx= max(mx,a[0]);
    cin>>a[1]; mx= max(mx,a[1]);
    cin>>a[2]; mx= max(mx,a[2]);
    cin>>a[3]; mx= max(mx,a[3]);
    if(mx!=a[0]) cout<< mx-a[0]<<" ";
    if(mx!=a[1]) cout<< mx-a[1]<<" ";
    if(mx!=a[2]) cout<< mx-a[2]<<" ";
    if(mx!=a[3]) cout<< mx-a[3]<<" ";
}
