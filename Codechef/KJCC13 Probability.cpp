#include<bits/stdc++.h>
using namespace std;
int arr[1000001];
int main(){
    int c=0;
    for(int i=0; i<=1000000; i++){
            int temp=i;
            if(temp==0) c++;
            else {
                while(temp){
                    if(temp%10==0){
                            c++;
                            break;
                    }
                    temp/=10;
                }
            }
            arr[i]=c;
        }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0) cout<<arr[b]<<"/"<<b-a+1<<endl;
        else cout<<arr[b]-arr[a-1]<<"/"<<b-a+1<<endl;
    }
    return 0;
}
