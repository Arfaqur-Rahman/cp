#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[10];
signed main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       for(int i=1; i<=n; i++){
            int num=i;
            while(num){
               a[num%10]++;
               num/=10;
            }
       }
       cout<<a[0];
       for(int i=1; i<10; i++){
            cout<<" "<<a[i];
       }
       cout<<endl;
       memset(a, 0, sizeof(a));
    }
}
