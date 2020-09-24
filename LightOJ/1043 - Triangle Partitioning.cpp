#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://iuconvergent.wordpress.com/2019/02/04/light-oj-1043-triangle-partitioning-solved/#:~:text=Explanation%3A,on%20any%20two%20matching%20sides.

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int tc;
   cin>>tc;
   for(int t=1; t<=tc; t++){
        double ab, ac, bc, r;
        cin>>ab>>ac>>bc>>r;
//abc=ade+bdec,
//ade/bdec=r;
//ade=r*bdec
//abc=r*bdec+bdec
//abc=bdec*(r+1)
//abc/ade= bdec*(r+1)/r*bdec = (r+1)/r
// abc/ ade = ab^2/ad^2 => ad^2 = ade/abc * ab^2 =  r/(r+1) * ab^2
        printf("Case %d: %.10f\n", t, sqrt(r/(r+1)) * ab );
   }
}
