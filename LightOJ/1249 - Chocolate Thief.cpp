#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int tc;
   scanf("%d", &tc);

   for(int t=1; t<=tc; t++){

        int n;
        scanf("%d", &n);

        map<int, string> m;
        int mn=INT_MAX;
        int mx=INT_MIN;
        while(n--){
            getchar();
            string s;
            cin>>s;
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);

            int v= a*b*c;

            m.insert({v, s});
            mn=min(mn, v);
            mx=max(mx, v);
        }


        printf("Case %d: ", t);
        if(mn==mx) printf("no thief\n");
        else cout<<m[mx]<<" took chocolate from "<<m[mn]<<endl;

    }
}


