#include <iostream>

using namespace std;
#define sc scanf
int main() {
  int t; sc("%d",&t); 
  for(int i=1;i<=t;i++){
    long long l,r; sc("%lld %lld",&l, &r); 
    // if l and r aren't already odd, make them odd 
    if(l%2==0) l++;
    if(r%2==0) r--;
    // sum of n numbers in a mathematical series = n/2 * (2*a+ (n-1)*d ) where a=the starting number of the series and d= difference 
    long long n=((r-l)/2+1); 
    printf("Case %d: %lld\n", i, (n* (2*l+ (n-1)*2 ) ) /2 );
	}

	return 0;
}


