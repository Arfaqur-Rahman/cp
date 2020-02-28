#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        if(st=="Icosahedron") s+=20;
        else if(st=="Cube") s+=6;
        else if(st=="Tetrahedron") s+=4;
        else if(st=="Dodecahedron") s+=12;
        else if(st=="Octahedron") s+=8;
    }
    cout<<s;
}
