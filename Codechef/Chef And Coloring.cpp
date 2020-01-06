#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n, g=0, b=0, r=0;
        scanf("%d",&n);
        string s;
        cin>>s;
        for(int i=0; i<n ;i++){
            if(s[i]=='G') g++;
            else if(s[i]=='B') b++;
            else r++;
        }
        printf("%d\n",n-max(max(g,r),b));
    }
    return 0;
}
