#include<iostream>
using namespace std;

bool prime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2; i*i<=n; i++) if(n%i==0) return false;
    return true;
}

int revnum(int n){
    int s=0;
    while(n){
        s=s*10 + n%10;
        n/=10;
    }
    return s;
}

int main(){
    int n;
    while(cin>>n){
        if(prime(n) && prime(revnum(n)) && n!=revnum(n)) cout<<n<<" is emirp."<<endl;
        else if( prime(n) ) cout<<n<<" is prime."<<endl;
        else cout<<n<<" is not prime."<<endl;
    }
}
