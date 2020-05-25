#include <iostream>
 
using namespace std;
 
int main() {
    int n, c=0; 
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x>=10 && x<=20) c++;
    }
    cout<<c<<" in"<<endl<<n-c<<" out"<<endl;
    return 0;
}
