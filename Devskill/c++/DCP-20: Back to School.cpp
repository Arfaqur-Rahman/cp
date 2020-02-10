#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        float a, b, r, c, d;
        cin>>a>>b>>r>>c>>d;
        float e=sqrt( (a-c)*(a-c) + (b-d)*(b-d) );
        if(e==r) cout<<"Case "<<i+1<<": OnCircle"<<endl;
        else if(e>r) cout<<"Case "<<i+1<<": Outside"<<endl;
        else cout<<"Case "<<i+1<<": Inside"<<endl;
    }
}
