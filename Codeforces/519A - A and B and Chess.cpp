#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    int sw=0, sb=0;
    for(int i=0;i<64;i++){
        cin>>c;
        if(c=='Q') sw+=9;
        else if(c=='R') sw+=5;
        else if(c=='B') sw+=3;
        else if(c=='N') sw+=3;
        else if(c=='P') sw+=1;
        else if(c=='K'|| c=='k' || c=='.') sw+=0;

        else if(c=='q') sb+=9;
        else if(c=='r') sb+=5;
        else if(c=='b') sb+=3;
        else if(c=='n') sb+=3;
        else if(c=='p') sb+=1;
    }
    if(sw>sb) cout<<"White"<<endl;
    else if(sw<sb) cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;
}
