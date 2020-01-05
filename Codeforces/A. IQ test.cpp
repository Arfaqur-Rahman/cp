#include<iostream>

using namespace std;
int main(){
    int e=0, ev, o=0, od;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d",&num);
        if(num%2==0){
            e++;
            ev=i;
        }
        else {
            o++;
            od=i;
        }
    }
    if(e==1) printf("%d",ev);
    else printf("%d",od);
    return 0;
}

