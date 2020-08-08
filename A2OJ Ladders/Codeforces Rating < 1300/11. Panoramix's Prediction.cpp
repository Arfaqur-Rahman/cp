#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=100;
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

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    sieve();
    
    int n, m;
    cin>>n>>m;

    if(!isPrime[m]) return cout<<"NO", 0;
    for(int i=n+1; i<m; i++){
        if(isPrime[i]) return cout<<"NO", 0;
    }
    cout<<"YES";
}
