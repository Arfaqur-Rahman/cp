#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin>>t; while(t--){long double a,b,c,d,l; cin>>a>>b>>c>>d>>l; b=sqrt( pow((a-c),2) + pow((b-d),2) ); cout<<fixed<<setprecision(10)<< l/2*sqrt(l*l/4-b*b/4)*acos(-1) <<endl; }
	return 0;
}
