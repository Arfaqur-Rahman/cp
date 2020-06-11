#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

signed main(){
   FAST;

   int d, sum, mins=0, maxs=0;
   cin>>d>>sum;
   int minarray[d], maxarray[d];
   for(int i=0; i<d; i++ ){
        int mint, maxt;
        cin>>mint>>maxt;
        minarray[i]=mint;
        maxarray[i]=maxt;
        mins+=mint;
        maxs+=maxt;
   }
   bool b=( sum>=mins && sum<=maxs ? b=true: false);
   if(b){
     cout<<"YES"<<endl;
     sum-=mins;
     int final[d];
     for(int i=0; i<d; i++) final[i]=minarray[i];
     for(int i=0; i<d; i++){
        int diff= maxarray[i]-minarray[i];
        diff= min(diff, sum);
        final[i]+=diff;
        sum-=diff;
     }
     for(int i=0; i<d; i++){
        cout<<final[i]<<" ";
     }

   } else cout<<"NO"<<endl;
}
