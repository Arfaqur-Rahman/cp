#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;

    if(n & 1) return cout<<-1, 0;

    while(n){
        cout<<n<<" ";
        n--;
    }
}
