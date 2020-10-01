
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1)
int main(){
    int t, c=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt=0;
        for(int i=0; i<n;  ){
            if(s[i]=='.') {
                cnt++;
                i+=3;
            }else i++;
        }
        cout<<"Case "<<c++<<": "<<cnt<<endl;
    }
}
