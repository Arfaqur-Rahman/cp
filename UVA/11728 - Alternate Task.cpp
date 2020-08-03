#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N= 1000000;
int SOD[N + 1];
int a[1000+1];
void generateSOD() {
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           SOD[j] += i;
       }
   }
}
void sumDivisorInterchange(){
    memset(a, -1, sizeof(a));
    for(int i=1; i<=1000000; i++){
        if(SOD[i]<=1000) a[SOD[i]]=i;
    }
}
int main(){
    generateSOD();
    sumDivisorInterchange();
    int n;
    int t=0;
    while(scanf("%d",&n) && n){
        printf("Case %d: %d\n", ++t, a[n]);
    }

}
