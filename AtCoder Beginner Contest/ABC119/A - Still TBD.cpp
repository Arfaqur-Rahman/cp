#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int y, m, d;
    y= stoi(s.substr(0,4));
    m=stoi(s.substr(5,2));
    d=stoi(s.substr(8,2));
    if(y<2019 || (y<=2019 && m<4) || (y<=2019 && m<=4 && d<30) )
        printf("Heisei\n");
    else if(y>2019 || (y>=2019 && m>4) || (y>=2019 && m>=4 && d>30) )
        printf("TBD\n");
    else
        printf("Heisei\n"); // when 2019/04/30
    return 0;
}

