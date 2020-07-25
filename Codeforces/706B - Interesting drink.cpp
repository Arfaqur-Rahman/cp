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

/* using frequency array (prefix sum)
#include<bits/stdc++.h>
using namespace std;
int freq[100000+1];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        freq[ a[i] ]++;
    }

    for(int i=1; i<=100000; i++)
    {
        freq[i]+= freq[i-1];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int p;
        cin>>p;
        p= min(p, 100000);
        cout<<freq[p]<<endl;
    }
}
*/

