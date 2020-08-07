#include<iostream>
using namespace std;
int main(){
    string t;
    cin>>t;
    for(int i=0;i<t.length();i++){
        if(t[i]=='H' || t[i]=='Q'|| t[i]=='9'){
            printf("YES\n");
            return 0;
        }
    }
    puts("NO");
    return 0;
}
