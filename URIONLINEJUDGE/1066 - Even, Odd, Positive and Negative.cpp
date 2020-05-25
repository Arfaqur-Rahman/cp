#include <iostream>
 
using namespace std;
 
int main() {
    int p=0, neg=0, e=0, o=0;
    for(int i=0; i<5; i++){ 
        int n;
        cin>>n;
        if(n%2){
            o++;
        }else{
            e++;
        }
        if(n>0){
            p++;
        }else if(n<0){
            neg++;
        }
    }
    
    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
 
    return 0;
}
