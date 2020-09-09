#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0; i<n; i++)
#define endl '\n'
#define ll long long

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    scanf("%d", &tc);

    for (int t = 1; t <= tc; t++) {

        int n, d;
        scanf("%d %d", &n, &d);

        ll s = 0;
        printf("Case %d: ", t);

        for (int i = 1; ; i++) {
            s = (s * 10) % n + d; // long long can not contain 10^6 digits!!!
            if (s % n == 0) {printf("%d\n", i); break;}
        }

    }
    return 0;
}


