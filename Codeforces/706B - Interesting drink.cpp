#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int& x: v) cin>>x;
   sort(v.begin(), v.end());

   int q;
   cin>>q;
   while(q--){
        int y;
        cin>>y;

        auto x=upper_bound(v.begin(), v.end(), y);
        cout<<x-v.begin()<<endl;
   }
}


