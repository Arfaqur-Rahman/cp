#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
    for(int tc=1; tc<=t; tc++){
    	int n, k; cin>>n>>k;
        cout<<"Case "<<tc<<":"<<endl;
        string s;
        for(int i=0; i<n; i++){
        	s+= 'A'+i;
        }

        int c=1;
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()))
        {
            if(c==k) break;
            cout<<s<<endl;
            c++;
        }

        
    }
}
