#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int a, b;
    while(cin>>a>>b){
        int ta=min(a,b); //didn't specify whether a will be smaller than b
        int tb=max(a,b);
        int maxcount=0;
        for(int i=ta; i<=tb; i++){
            int temp=i, c=0;
            while(1){
                c++;
                if(temp==1) break;
                if(temp & 1) temp= 3*temp+1;
                else temp/=2;
            }
            maxcount=max(maxcount, c);
        }
        cout<<a<<" "<<b<<" "<<maxcount<<endl;
    }
}
