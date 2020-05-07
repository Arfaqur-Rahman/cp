#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sz=s.length();
        int f=0, b=0, zero = 0;
        
        for(int i=0; i<sz; i++){
            if(s[i]=='0') zero++;
        }
        
        for(int i=0; i<sz; i++){
            if(s[i]=='1') break;
            f++;
        }

        for(int i=sz-1; i>=0; i--){
            if(s[i]=='1') break;
            b++;
        }
        
        cout<<(zero-f-b>0 ? zero-f-b : 0)<<'\n';
        
    }

}



/* Another
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int starting1=-1;
        for(int i=0; s[i]; i++){
            if(s[i]=='1'){starting1=i; break;}
        }

        int ending1=-1;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='1'){ending1=i; break;}
        }

        int numof0=0;
        for(int i=starting1; i<=ending1; i++){
            if(s[i]=='0') numof0++;
        }
        cout<<numof0<<endl;
    }

}
*/
