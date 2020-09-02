1/*

Let's look at an the given test case and search for a pattern there:
When n=12 and m=3
-1 -2 -3 +4 +5 +6 -7 -8 -9 +10 +11 +12
= (-1+4) + (-2+5) + (-3+6) + (-7+10) + (-8+11) + (-9+12)
=    3   +    3   +    3   +    3    +    3    +    3 [We got 3 every time!!! 3 is the value of m! and how many m did we get? 6!!! 6 is half of n!!!]
=    3 * (12/2)     [ m*(n/2) ]

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tc;
    scanf("%d", &tc);

    for(int t=1; t<=tc; t++){
        ll n, m;
        scanf("%lld %lld", &n, &m);

        printf("Case %d: %lld\n",t, m*n/2);

    }
}
