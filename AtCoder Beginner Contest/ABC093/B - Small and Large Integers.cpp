#include<iostream>
using namespace std;

int main(void){
    int a, b, k, i;
  	cin>>a>>b>>k;
  	i=a;
    while(i<=a+k-1 && i<=b){
        cout<<i<<endl;
        i++;
    }
    if(i-1<b-k+1){
        i=b-k+1;
    }
        while(i<=b){
            cout<<i<<endl;
            i++;
        }
}
