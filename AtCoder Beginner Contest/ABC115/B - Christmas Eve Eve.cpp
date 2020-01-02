#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(scanf("%d",&t)==1){
        vector<int> v(t);
        int sum=0;
        for(int i=0;i<t;i++){
            scanf("%d",&v[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<t-1;i++){
            sum=sum+v[i];
        }
        printf("%d\n",sum+v[t-1]/2);
    }
    return 0;
}
