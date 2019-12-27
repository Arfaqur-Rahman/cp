#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c=0;
    cin>>s;
    int maxi=0;
    for(int i=0; s[i]!='\0'; i++){
        if( s[i]=='A'|| s[i]=='G'|| s[i]=='C'|| s[i]=='T' ){
            c++;
            maxi=max(maxi,c);
            continue;
        }

        c=0;
    }
    printf("%d\n",maxi);
    return 0;
}
