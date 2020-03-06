#include <iostream>

using namespace std;

int main() {
    int t, c, m,k=0;
    cin>>t>>c>>m;
    while(t--){
        int d, c1, m1;
        cin>>d>>c1>>m1;
        if(c1>c) {cout<<"CLE"; return 0;}
        else if(m1>m) {cout<<"MLE"; return 0;}
        else if(d!=0) {cout<<"WA"; return 0;}
    }
     cout<<"AC";
	return 0;
}
