#include<iostream>
using namespace std;
main(void){
    int n,c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;){
        if(a[i]==2) {
        cout<<c;return 0;
        } else if(c>n){
            cout<<-1;return 0;
        }else{
         i=a[i]-1; c++;
        }
    }cout<<-1;
}
