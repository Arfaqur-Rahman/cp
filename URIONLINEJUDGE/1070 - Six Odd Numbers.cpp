#include <bits/stdc++.h>

using namespace std;

int main() {
   int n; cin>>n;
   if( n % 2 == 0)  n++;
   for(int i=n, c=0; c<6 ; i+=2, c++) cout<<i<<endl;
   return 0;
}
