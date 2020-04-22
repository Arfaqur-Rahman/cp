#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
	  ios::sync_with_stdio(false);
    long long int n,m,x,c=0, temp;
    cin>>n>>m>>x;
	  temp= m/x - n/x;
    temp+= (n%x==0);
    cout<<temp;
    
    return 0;
}

