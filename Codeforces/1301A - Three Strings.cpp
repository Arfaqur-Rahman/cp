#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a, b, c;
        cin>>a>>b>>c;
        int l=a.length();
        for(int i=0; i<l; i++){
            if(c[i]==a[i]) b[i]=c[i];
            if(c[i]==b[i]) a[i]=c[i];
            else a[i]=c[i];
        }
        cout<<(a==b ? "YES" : "NO")<<endl;
    }

}
