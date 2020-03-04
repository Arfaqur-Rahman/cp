//not the smartest solution out there but it works!
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maxi=-1, mini=1000000000;
    string old, young;
    cin>>n;
    while(n--){
        string s;
        int d, m, y;
        cin>>s>>d>>m>>y;
        y=d+m*30+y*365;
        if(y>maxi){
            maxi=y;
            young=s; //who who were born last, would have the highest value of y(as y=d+m*30+y*365 )
        }
        if(y<mini){
            mini=y;
            old=s;
        }
    }
    cout<<young<<endl<<old<<endl;
}
