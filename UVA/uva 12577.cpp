
#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=1;
    while(1){
        string s;
        cin>>s;
        if(s=="Hajj") printf("Case %d: Hajj-e-Akbar\n",c++);
        else if(s=="*") break;
        else printf("Case %d: Hajj-e-Asghar\n",c++);
    }

    return 0;
}

