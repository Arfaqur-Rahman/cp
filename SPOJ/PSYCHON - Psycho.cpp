#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = (int)1e7;
bool pr[N + 1];
vector<int> v;

vector<ll> base, power;

void sieve() {
	for(int i = 0; i <= N; i++) {
		pr[i] = true;
	}

	pr[0] = pr[1] = false;

	for(int i = 2; i * i <= N; i++ ) {
		if(pr[i]) {
			for(int j = i * i; j <= N; j += i) {
				pr[j] = false;
			}
		}
	}

	for(int i = 2; i <= N; i++) {
		if(pr[i]) {
			v.push_back(i);
		}
	}

}




void primeFactorize(long long n) {

    for(int i = 0; i < v.size(); i++) {
    	int p = v[i];

    	if((long long) p * p > n) break;

        if( n % p == 0) {
            int cnt = 0;
            while (n % p == 0) {
                n /= p;
                cnt++;
            }

            base.push_back(p);
            power.push_back(cnt);

        }
    }

    if(n > 1){
    	base.push_back(n);
        power.push_back(1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    sieve();

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0 || n==1){cout<<"Ordinary Number"<<endl; continue;}

        power.clear();
        base.clear();
        primeFactorize(n);

        int odd=0,  ev=0;
		for(auto x: power) {

            x & 1? odd++ : ev++;

		}

        cout<<( ev > odd ? "Psycho Number" : "Ordinary Number" )<<endl;

    }


}
