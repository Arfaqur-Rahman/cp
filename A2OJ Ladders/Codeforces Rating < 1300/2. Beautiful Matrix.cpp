#include<bits/stdc++.h>
using namespace std;

int main(){
    int ii=-1, jj=-1;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++){
            int x;
            cin>>x;
            if(x==1){
                ii=i;
                jj=j;
            }
        }
   }

    cout<< abs(2-ii)+abs(2-jj)<<endl;
    return 0;
}
