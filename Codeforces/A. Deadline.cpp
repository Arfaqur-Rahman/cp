#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, d;
        cin>>n>>d;
        int k=0;
        for(int i=0;i<sqrt(d);i++){
            if(i+(d+i)/(i+1)<=n){
                k=1;
                break;
            }
        }
        cout<<(k?"YES":"NO")<<endl;
  
    }
    return 0;
}