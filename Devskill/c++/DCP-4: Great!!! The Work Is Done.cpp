#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, n;
    while(cin>>h>>n){
            int s=0;
            while(n--){
                int t;
                cin>>t;
                s+=t;
            }

        if((s+h-1)/s==1) cout<<"Project will finish within "<<1<<" day."<<endl;
        else cout<<"Project will finish within "<<(s+h-1)/s<<" days."<<endl;
    }
	return 0;
}
