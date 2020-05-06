#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;

    while(cin>>a>>b && (a || b)){
        bool bo=false;
        int c=0;
        while(a || b){
            if(bo){
                if( ( (a%10)+(b%10)+1 ) >9) {c++;  bo=true;  }
                else bo=false;
            }
            else{
                if( ( (a%10)+(b%10) ) >9) {c++;  bo=true;  }
                else bo=false;
            }
            a/=10;
            b/=10;
        }
        if(c==1 ) cout<<"1 carry operation.\n";
        else if(c==0 ) cout<<"No carry operation.\n";
        else cout<<c<<" carry operations.\n";
    }
}
