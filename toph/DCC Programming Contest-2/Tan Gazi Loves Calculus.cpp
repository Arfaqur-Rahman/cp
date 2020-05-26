#include <bits/stdc++.h>

using namespace std;
//n(n3+2n2+3n+2)8
int main() {

	string s;
	while(cin>>s){
        bool minusa=false, minusb=false;
        long long sum=0;
        //reverse(s.begin(), s.end());
        //cout<<s<<endl;
        if(s[0]=='-'){
            minusa=true;
            s.erase(0, 1);
        }
        //cout<<s<<endl; return 0;
        int i;
        for(i=0; s[i]; i++){
            if(s[i]=='x') break;
            sum= sum*10+ (s[i]-'0');
        }
        if(s[0]=='x') sum=1;
        sum*=2;
        if(s[i+2]=='-') minusb=true;
    i+=3;

        long long sum2=0;
        if(s[i]=='x') sum2=1;
        else{
            for(; s[i]; i++){
            if(s[i]=='x') break;
            sum2= sum2*10+ (s[i]-'0');
            }
        }

        if(minusa && minusb ) cout<<"-"<<sum<<"x-"<<sum2<<endl;
        else if(minusa) cout<<"-"<<sum<<"x+"<<sum2<<endl;
        else if(minusb) cout<<sum<<"x-"<<sum2<<endl;
        else cout<<sum<<"x+"<<sum2<<endl;
	}
	return 0;
}
