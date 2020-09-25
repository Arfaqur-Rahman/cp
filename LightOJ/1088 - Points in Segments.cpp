#include<bits/stdc++.h>
using namespace std;
#define ll long long

// http://mahimpantho.blogspot.com/2017/08/lightoj-1088-points-in-segments.html

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int tc;
    scanf("%d",&tc);
    for(int t=1; t<=tc; t++){
        int n, q;
        scanf("%d %d", &n, &q);
        vector<int> v(n);
        for(int& x: v) scanf("%d",&x);

        printf("Case %d:\n", t);

        int it1, it2;
        while(q--){
            int a, b;
            scanf("%d %d", &a, &b);
            it1=lower_bound(v.begin(), v.end(), a)-v.begin();
            it2=upper_bound(v.begin(), v.end(), b)-v.begin();
            printf("%d\n", it2-it1);

        }

    }
}
