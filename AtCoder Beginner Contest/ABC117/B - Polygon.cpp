#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0;
    scanf("%d",&n);
    vector<int> v(n);
    for(int i=0;i<n;i++){
            scanf("%d",&v[i]);
            s+=v[i];
    }
    sort(v.begin(), v.end());
    if(v[n-1]<s-v[n-1]) printf("Yes\n" );
    else printf("No\n" );
    return 0;
}

