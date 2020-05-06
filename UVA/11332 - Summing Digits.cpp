#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(){
    int n;

    while(cin>>n && n){
        while(n>9){
            n=sumOfDigits(n);
        }
        cout<<n<<endl;
    }
}
