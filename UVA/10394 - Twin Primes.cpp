#include<bits/stdc++.h>
using namespace std;
const int N=20000000;
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


vector< pair<int, int> > v;
void value(){
    for(int i=2; i<=N; i++){
        if(isPrime[i-2]==true && isPrime[i]==true) v.push_back( {i-2, i} );
    }
}



int main(){
    sieve();
    value();
    int n;
    while(cin>>n){
        cout<<"("<<v[n-1].first<<", "<<v[n-1].second<<")"<<endl;
    }
}
