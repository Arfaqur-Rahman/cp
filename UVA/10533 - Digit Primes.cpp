#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

int a[N+1];
int pref[N+1];
void func(){

    for(int i=0; i<=N; i++){
        if(isPrime[i]){
            ll s=0;
            int ii=i;
            while(ii!=0){
                s+=ii%10;
                ii/=10;
            }
            if(isPrime[s]) a[i]= true;
            else a[i]=false;
        }else a[i]=false;


    }
}

void prefi( ){
    pref[0]=a[0];
    for(int i=1; i<=N; i++) pref[i]= pref[i-1]+a[i];

}

int main(){
    sieve();
    func();
    prefi();

    int t;
    scanf("%d", &t);
    while(t--){
        int m, n;
        scanf("%d %d", &m, &n);

        printf("%d\n", pref[n]-pref[m-1]);
    }
}
