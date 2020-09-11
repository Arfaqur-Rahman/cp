#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
   string s;
   int k=1;
   while(cin>>s){
        cout<<"Case "<<k++<<":"<<endl;
        int n;
        cin>>n;
        while(n--){
            int a, b;
            cin>>a>>b;
            int aa= min(a, b);
            int bb= max(a, b);
            int c=0;
            for(int i=aa+1; i<=bb; i++) if(s[i-1]==s[i]) c++;
            if(c== bb-aa) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
   }
}
