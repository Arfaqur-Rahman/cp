#include <bits/stdc++.h>
using namespace std;

int main(){
    int c=0;
    string s;
    cin >> s;

    char k=s[0];
    for(int i =1; s[i]!='\0'; i++){
        if(k==s[i]){ 
          c++;
        }
        k=='0' ? k='1' : k='0';
    }
    printf("%d\n",c);
    return 0;
}



