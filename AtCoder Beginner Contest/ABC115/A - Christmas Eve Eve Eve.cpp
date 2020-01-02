
#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int d;
    while(scanf("%d",&d)==1){
        printf("Christmas");
        while(d<25){
            printf(" Eve");
            d++;
        }
        puts("");
    }
    return 0;
}

