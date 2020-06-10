#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int N;

void bin(int num, int a[]){
    int k=N;
    while(num){
        int temp=(num & 1);
        a[--k]=temp;
        num/=2;
    }

}

signed main(){
   FAST;

   int m, k;
   while(cin>>N>>m>>k) {
        int army[m];
        for(int i=0; i<m; i++) cin>>army[i];

        int Fedor; cin>>Fedor;
        int FedorArray[N]={0};
        bin(Fedor, FedorArray);


        int c=0;
        for(int i=0; i<m; i++){
           int a[N]={0};
           bin(army[i], a);
           int s=0;
           for(int j=0; j<N; j++){
             if(a[j]+FedorArray[j]==1) s++;
           }
           if(s<=k) c++;
        }

        cout<<c<<endl;
   }
}
