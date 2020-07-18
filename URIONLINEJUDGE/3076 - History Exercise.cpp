#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    while(cin>>n){
        if(n<100) cout<<1<<endl;
        else {
           int temp= n/100;
           if(n-temp*100 == 0) cout<<temp<<endl;
           else cout<<temp+1<<endl;
        }

    }

    return 0;
}
