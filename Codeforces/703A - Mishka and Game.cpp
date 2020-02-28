#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=0, c=0;
    cin>>n;
    while(n--){
        int md, cd;
        cin>>md>>cd;
        if(md>cd) m++;
        else if(md<cd) c++;
    }
    if(m>c)cout<<"Mishka";
    else if(m<c)cout<<"Chris";
    else cout<<"Friendship is magic!^^";
}
