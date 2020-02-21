#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int a, k, s1=0, s2=0,s3=0; 
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>k;
        s1+=k;
    }
    for(int i=0;i<a-1;i++){
        cin>>k;
        s2+=k;
    }
    cout<<s1-s2<<endl;
    for(int i=0;i<a-2;i++){
        cin>>k;
        s3+=k;
    }
    cout<<s2-s3<<endl;
}
