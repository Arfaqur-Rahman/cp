#include<iostream>
using namespace std;
int main(){
  long long a, b, k;
  cin>>a>>b>>k;
  if(a>k || a==k) cout<<a-k<<" "<<b<<endl;
  else{
      (a-k+b>0 ||a-k+b==0) ? cout<<0<<" "<<a-k+b<<endl : cout<<0<<" "<<0<<endl;
  }
  return 0;
}
