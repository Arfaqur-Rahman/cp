#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int mx=-1;
    mx= max(mx, a+b*c   );
    mx= max(mx, a*(b+c) );
    mx= max(mx, a*b*c   );
    mx= max(mx, (a+b)*c );
    mx= max(mx,  a+b+c  );
    cout<<mx;
}
