#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin>>n;
    string s1, s2; cin>>s1>>s2;

    int sum=0;
    for(int i=0; i<n; i++){
        int num1=s1[i]-'0';
        int num2=s2[i]-'0';


        sum+= min( abs(num2-num1) , 10-max(num1,num2) + min(num1, num2)  ); //cout<<min( abs(num2-num1) ,  10-max(num1,num2) + min(num1, num2)  )<<" "<<i<<endl;

    }
    cout<<sum<<endl;
}
