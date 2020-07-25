#include<bits/stdc++.h>
using namespace std;
#define ll long long
void hextodec(string s){
    unsigned long long sum=0;
    ll l=s.length()-1;
    for(ll i=l; i>=2; i--){
        if(isdigit(s[i])){
            sum+= pow(16, l-i) * (s[i]-'0');
        }else{
            sum+= pow(16, l-i) * (s[i]-'A' + 10);
        }
    }
    cout<<sum<<endl;
}

void dectohex(string s){
    int n=stoi(s);
    vector<char> v;
    while(n){
        int temp=n%16;
        if(temp<=9){
            char c= temp+'0';
            v.push_back(c);
        }else{
            char c= char(55+temp);
            v.push_back(c);
        }
        n/=16;
    }
    cout<<"0x";
    for(int i=v.size()-1; i>=0; i--) cout<<v[i];
    cout<<endl;
}

int main()
{   
    string s;
    while(cin>>s){
        if(s[0]=='-') break;
        else if(s[1]=='x'){
            hextodec(s);
        }else{
            dectohex(s);
        }
    }

}
