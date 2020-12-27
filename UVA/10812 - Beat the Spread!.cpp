#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {



    int t; cin >> t;
    while (t--) {
    
        ll s, d; cin >> s >> d;

        ll a = (s + d) / 2;

        ll b = abs(s - d) / 2;

        if (a + b == s && (a - b == d || b - a == d) ) {if (a > b)cout << a << " " << b << endl; else cout << b << " " << a << endl;}
        else cout << "impossible\n";
        
    }
}
