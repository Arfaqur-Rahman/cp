#include<bits/stdc++.h>
using namespace std;
int main(){
 int n; cin>>n; set<int> s;
 int k; cin>>k;
 for(int i=0;i<k;i++){
 int k1;cin>>k1;s.insert(k1);
 } 
 int p; cin>>p;
 for(int i=0;i<p;i++){
 int p1; cin>>p1; s.insert(p1);
 }
 if(s.size()==n) puts("I become the guy.");
 else puts("Oh, my keyboard!");
 
 
}
