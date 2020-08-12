#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uld unsigned long long
#define endl '\n'
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    std::vector<int> v(n);

	    for(int i=0; i<n; i++) {scanf("%d",&v[i]); }

        sort(v.begin(), v.end());
        int mn=INT_MAX;
        for(int i=1; i<n; i++) {mn=min(mn, v[i]-v[i-1]); }
        printf("%d\n",mn);
	    
	}
	return 0;
}
