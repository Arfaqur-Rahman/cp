#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=0;
  	int a[3];
  	for(int i=0;i<3;i++) {
      cin>>a[i];
      s+=a[i];
    }
  	int k;
  	cin>>k;
  	sort(a,a+3);
  	cout<<s-a[2]+pow(2,k)*a[2];
    return 0;
}
