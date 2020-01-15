#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0) return 0;
        float g=0, d, m, c;
        d= m= c= n/7;
            if(n%7==1){
                m+=0.5;
            }
            if(n%7==2){
                m+=0.5;
                g=1;
            }
             if(n%7==3){
                c+=0.5;
                g=0.5;
            }
             if(n%7==4){
                c+=0.5;
                m+=0.5;
                g=0.5;
            }
             if(n%7==5){
                m+=1;
                c+=0.5;
                g=0.5;
            }
             if(n%7==6){
                c+=1;
                m+=0.5;
            }
        printf("%.1f %.1f %.1f %.1f\n",g,m,m,c);
    }
}