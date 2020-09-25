#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://www.davidudelson.com/blog/2015/07/24/uva-10954-add-all/

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll n;
    while(cin>>n && n){
        ll total=0;
        priority_queue<ll> pq;
        while(n--){
            ll x;
            cin>>x;
            pq.push(-1*x);
        }

        while(pq.size()>1){
            ll a=pq.top(); pq.pop();
            ll b=pq.top(); pq.pop();

            total+= -a-b;

            pq.push(a+b);

        }

        cout<<total<<endl;

    }
}
