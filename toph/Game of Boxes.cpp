#include <iostream>

using namespace std;

int main() {
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		long long s1=0, s2=0, s3=0, maxa=-1, maxb=-1, maxc=-1;
		while(n--){
			long long a, b, c; cin>>a>>b>>c;
			s1 += a;
			s2 += b;
			s3 += c;
			maxa=max(a,maxa);
			maxb=max(b,maxb);
			maxc=max(c,maxc);
		}
		cout<<min( s1*maxb*maxc, min( s2*maxa*maxc, s3*maxb*maxa) )<<endl;
	}
	return 0;
}
