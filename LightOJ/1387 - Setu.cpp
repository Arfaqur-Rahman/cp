#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        int n, sum=0;
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        while(n--){
            string s;
            int num;
            cin>>s;
            if(s=="report") cout<<sum<<endl;
            else {
                cin>>num;
                sum+=num;
            }
        }
    }
}

