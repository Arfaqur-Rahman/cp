#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    scanf("%d", &t);

    for(int tc=1; tc<=t; tc++){
        int P, L;
        scanf("%d %d", &P, &L );

        int x= P-L;

        vector<int> v;
        for(int i=1; (ll) i*i<=x; i++){ // if (ll) is not used, tle is encountered!!!!
            if(x%i==0){
                if(i>L) v.push_back(i);
                int temp=x/i;
                if(temp!=i && temp>L) v.push_back(temp);
            }
        }
        sort(v.begin(), v.end());

        printf("Case %d: ", tc);
        if(v.size()==0) printf("impossible\n");
        else{
            printf("%d", v[0]);
            for(int j=1; j<v.size(); j++) printf(" %d", v[j]);
            printf("\n");
        }
    }
}
