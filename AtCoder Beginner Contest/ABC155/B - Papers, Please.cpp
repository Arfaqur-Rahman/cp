#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
  	int t;
    cin>>t;
    if(t%2==0 && !( t%3==0 || t%5==0 ) ){
      cout<<"DENIED"; return 0;
    }
  }
  cout<<"APPROVED";
}
