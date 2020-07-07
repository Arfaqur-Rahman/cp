#include<bits/stdc++.h>
using namespace std;

int a[10000+1];

void func(){
    int f=1;
    for(int i=1; i<=10000; i++){
        f*=i;
        while(f%10==0) f/=10;
        f%=100000;
        a[i]=f%10;
    }
}

int main(){
    func();
    int n;
    while(cin>>n){
        printf("%5d -> %d\n", n, a[n]);
    }
}
