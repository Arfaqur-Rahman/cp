#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d, bd, abcd, gcd;
        char div, o;
        cin>>a>>div>>b>>o>>c>>div>>d;
        if(o=='+'){
         abcd=a*d+c*b;
         bd=b*d;
        gcd=abs(__gcd(abcd, bd));
         cout<<abcd<<'/'<<bd<<" = "<<abcd/gcd<<'/'<<bd/gcd<<endl;
        }else if(o=='-'){
         abcd=a*d-c*b;
         bd=b*d;
         gcd=abs(__gcd(abcd, bd));
         cout<<abcd<<'/'<<bd<<" = "<<abcd/gcd<<'/'<<bd/gcd<<endl;
        }else if(o=='*'){
         abcd=a*c;
         bd=b*d;
         gcd=abs(__gcd(abcd, bd));
         cout<<abcd<<'/'<<bd<<" = "<<abcd/gcd<<'/'<<bd/gcd<<endl;
        }else{
         abcd=a*d;
         bd=b*c;
         gcd=abs(__gcd(abcd, bd));
         cout<<abcd<<'/'<<bd<<" = "<<abcd/gcd<<'/'<<bd/gcd<<endl;
        }
    }
    return 0;
}
