#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    while(n--){
        float a, b, c;
        cin>>a>>b>>c;
        float d=sqrt(a*a+b*b);
        printf("%.2f\n",sqrt(d*d+c*c));
    }
}
