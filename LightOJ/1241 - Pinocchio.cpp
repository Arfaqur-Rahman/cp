#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tc;
    scanf("%d", &tc);

    for(int t=1; t<=tc; t++){
        int n;
        scanf("%d", &n);
        n++;

        int a[n];
        a[0]=2; // When he wakes up, his nose length is fixed at 2cm. But a[0] can be >=2! So we are manually ensuring that a[0]=2, so that we can compare it with a[1] if it is bigger than 2.
        for(int i=1; i<n; i++) scanf("%d", &a[i]);

        int c=0;
        for(int j=1; j<n; j++){
            if(a[j]>a[j-1]){
                int dif= a[j]-a[j-1];
                if(dif%5==0) c+= dif/5; // We are asked to find the minimum number of lies he tells. So if the difference is 5, we will assume he told only 1 lie(not 5 lies) so that count of lies stays minimum.
                else c+= dif/5 +1;
            }
        }

        printf("Case %d: %d\n",t, c);

    }
}
