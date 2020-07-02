#include<bits/stdc++.h>
using namespace std;
const int N=32768;
bool isPrime[N + 1];
void sieve() { // O(N lg lg N)
   for(int i = 0; i <= N; i++) {
       isPrime[i] = true;
   }
   isPrime[0] = isPrime[1] = false;
   for(int i = 2; i * i <= N; i++) {
       if(isPrime[i] == true) {
           for(int j = i * i; j <= N; j += i) {
               isPrime[j] = false;
           }
       }
   }
}




int main(){
    sieve();

    int n;
    while(cin>>n && n){
        int c=0;
        for(int i=2; i<=n/2; i++){
            if(isPrime[i]==true && isPrime[n-i]==true) c++; 
        }
        cout<<c<<endl;
    }
}
