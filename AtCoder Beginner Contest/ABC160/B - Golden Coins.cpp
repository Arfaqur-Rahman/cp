#include<iostream>
using namespace std;
// 2 3 4 5
int main(){
  long x; cin>>x;
  long p= x/500 *1000;
  x%=500;
  p+= x/5*5;
  cout<<p;
}
