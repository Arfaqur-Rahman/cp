
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
        int n; cin>>n;
        multimap<float,string> m;
        for(int i=0; i<n; i++){
            string value;
            cin>>value;
            float f= stof(value);
            m.insert(pair<float,string>(f,value));
        }

        if (!m.empty()){
            auto ite = m.begin();
            cout<<ite->second;
            for(ite = ++(m.begin()); ite != m.end(); ++ite)
            {
                cout<< "," <<ite->second;
            }
            cout<<endl;
        }
    }
	return 0;
}

