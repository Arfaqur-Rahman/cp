#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


signed main(){
    FAST;
    double a, b, h, m;
    while(cin>>a>>b>>h>>m){
        //a2=b2+c2-2bc*cos(theta)
        double h_=h*2*acos(-1)/12==0 ? 2*acos(-1) : 2*h*acos(-1)/12;
        double extrah_= 2*acos(-1)/(12*60)*m;
        double m_=m*2*acos(-1)/60==0 ? 2*acos(-1) : 2*m*acos(-1)/60 ;
        double theta = abs(h_+extrah_-m_);
        cout<<fixed<<setprecision(20)<<sqrt(a*a+b*b-2*b*a*cos(theta))<<endl;
    }

}
