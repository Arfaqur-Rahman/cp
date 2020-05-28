#include<bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long t;               //got WA for not using long long
    while(cin>>t && t>=0){     //t can be equal to zero
        cout<<t*(t+1)/2+1<<endl;
    }
}
