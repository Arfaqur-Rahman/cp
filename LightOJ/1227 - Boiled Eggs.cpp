#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int tc;
    scanf("%d", &tc);

    for(int t=1; t<=tc; t++){
        int n, p ,q;
        scanf("%d %d %d", &n, &p, &q);

        int a[n];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);

        int mx=0;
        for(int j=0; j<n; j++){
            int c=0, s=0;
            for(int i=j; i<n; i++){
                if(c<p && s+a[i]<=q) {
                    s+=a[i]; 
                    c++; 
                    mx=max(mx, c);
                }
                else break;
            
            }
        }



        printf("Case %d: %d\n",t, mx);

    }
}
