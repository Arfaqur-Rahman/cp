#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int product=1;
    n--;
    while(n--){
        product*=(k-1);
    }
    cout<<product*k;
    return 0;
}
