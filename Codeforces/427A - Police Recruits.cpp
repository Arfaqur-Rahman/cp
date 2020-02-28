#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p=0, c=0;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        if(k==-1){
            if(p-1<0){
                c++;
            }
            if(p>0) p--;
        }else{
            p+=k;
        }
    }
    cout<<c;
}
