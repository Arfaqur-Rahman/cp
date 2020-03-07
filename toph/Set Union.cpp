#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m; cin>>n>>m; set<int> s; while(n--){int k; cin>>k; s.insert(k);} while(m--){int k; cin>>k; s.insert(k);} 
	int h=0;
	for (auto it=s.begin(); it!=s.end(); ++it){
        if(h)cout<<" ";
        cout <<*it;
        h++;
	}
}
