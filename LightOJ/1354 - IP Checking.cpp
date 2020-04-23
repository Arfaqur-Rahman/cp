#include<bits/stdc++.h>
using namespace std;

int binToDec(string s1){
    int sum=0;
    reverse(s1.begin(), s1.end());
    for(int i=0; s1[i]; i++) if(s1[i]=='1') sum+= pow(2, i);
    return sum;
}

int main(){
   int tc; cin>>tc;
   for(int t=1; t<=tc; t++){
     int a, b, c, d;
     scanf("%d.%d.%d.%d", &a, &b, &c, &d);
     int e, f, g, h;
     scanf("%d.%d.%d.%d", &e, &f, &g, &h);
     e= binToDec(to_string(e));
     f= binToDec(to_string(f));
     g= binToDec(to_string(g));
     h= binToDec(to_string(h));
     cout<<"Case "<<t<<": ";

     if(e==a && f==b && g==c && h==d) puts("Yes");
     else puts("No");
   }
}
