#include<bits/stdc++.h>
using namespace std;

const int N=1000+5;
bool isPrime[N + 1];
void sieve() { // O(N lg lg N)
   for(int i = 0; i <= N; i++) {
       isPrime[i] = true;
   }
   isPrime[0] = false;
   isPrime[1] = true;
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

    vector<int> v;

    int n, k;
    while(cin>>n>>k){
        cout<<n<<" "<<k<<":";

        v.clear();
        for(int i=1; i<=n; i++)
            if( isPrime[i] ) v.push_back(i);


        int d, start;
        if(v.size()%2==0){
            d= 2*k;
            start = v.size()/2-k;
        }else{
            d=2*k-1;
            start = v.size()/2-k+1;
        }

        if(d>=v.size()){
            for(auto x: v) cout<<" "<<x; 
            cout<<endl;
        }
        else{
            if(v.size()%2==0){
                for(int i=start; i<start + d; i++) cout<<" "<<v[i];
                cout<<endl;
            }else{
                for(int i=start; i<start + d; i++) cout<<" "<<v[i];
                cout<<endl;
            }
        }
        cout<<endl;
    }

}
