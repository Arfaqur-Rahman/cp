#include<iostream>
using namespace std;

int main(){
    float f;
    while(cin>>f && f){
        float s=0.0;
        int i;
        for( i=2; i<=1000000000; i++){
            s+=1.0/i;
            if(s>=f) break;
        }
         printf("%d card(s)\n",i-1);
    }
    return 0;
}
