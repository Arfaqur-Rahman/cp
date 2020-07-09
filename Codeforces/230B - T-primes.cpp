#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N=1000000;
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


signed main(){
    sieve();
    FAST;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double sqr= sqrt(n);
        if( ceil(sqr) == floor(sqr) &&  isPrime[(int)sqr] ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
