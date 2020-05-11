#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        long long a, b, c; //if int is used, WA is encountered!
        cin>>a>>b>>c;
        if(a+b>c && c+a>b && b+c>a){
            if(a==b && b==c && c==a) cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
            else if(a==b || b==c|| c==a) cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
            else cout<<"Case "<<i<<": "<<"Scalene"<<endl;
        }else{
            cout<<"Case "<<i<<": "<<"Invalid"<<endl;
        }
    }
}
