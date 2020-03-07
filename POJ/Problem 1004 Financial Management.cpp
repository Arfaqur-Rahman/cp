#include<iostream>
using namespace std;

int main(){
    int a=12;
    float s=0.0;
    while(a--){
        float f;
        cin>>f;
        s+=f;
    }
    printf("$%.2f",s/12.0);
    return 0;
}
