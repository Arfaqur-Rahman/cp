#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){

        long long int a,c=0;
        cin>>a;
        while(a!=0){
                int l=a%10;
            if(l==7 || l==4){
              c++;
            }

            a/=10;
        }

        (c==7|| c==4)? printf("YES\n"): printf("NO\n");


    return 0;
}
