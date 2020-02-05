#include<bits/stdc++.h>
using namespace std;
main(void){
    int n;
    cin>>n;
    int num= sqrt(n);
    cout<<((num*num)>n ? (num-1)*(num-1): num*num )<<endl;
}
