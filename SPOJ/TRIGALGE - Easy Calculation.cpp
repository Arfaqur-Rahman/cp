#include<bits/stdc++.h>
using namespace std;

bool isEqual(double a, double b){
    return abs(a-b)<=1e-9;
}

bool isGreater(double a, double b){
    return a > b+ 1e-9;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        double a, b, c;
        cin>>a>>b>>c;

        double l=0, r=c, mid;

        while(l<=r){
            mid= l+(r-l)/2;

            if(isEqual(mid*a+b*sin(mid), c)){
                break;
            }

            else if(isGreater(mid*a+b*sin(mid), c)) r=mid;
            else l=mid;
        }
        printf("%.6f\n", mid);
    }
}














