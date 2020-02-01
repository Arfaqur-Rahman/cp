#include<bits/stdc++.h>
using namespace std;
int main(void){
   string s1,s2;
   cin>>s1>>s2;
   s1+=s2;
   int a=stoi(s1);
    float f=sqrt(a);
    int b=(int) f;
    if(b==f) cout<<"Yes";
    else cout<<"No";
}
