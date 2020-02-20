#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    bool b=false;
    for(long long i=0;i<n;i++){
            if( a[i][0] =='O' && a[i][1]=='O'){
                a[i][0]='+';
                a[i][1]='+';
                b=true;
                break;
            }else if( a[i][3] =='O' && a[i][4]=='O' ){
                a[i][3]='+';
                a[i][4]='+';
                b=true;
                break;
            }
    }
    if(b){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}
