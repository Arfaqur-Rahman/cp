#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y; cin>>x>>y;
    for(int i=1, line=0; i<=y; i++){
        cout<<i; // direct cout<<i<<" "; causes a WA
        line++;
        if(line==x){
            cout<<endl;
            line=0;
        }
        else cout<<" ";
    }
 
    return 0;
}
