#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    cin>>n>>c;
    vector<int> p(n);
    vector<int> t(n);
    for(int& x: p) cin>>x;
    for(int& x: t) cin>>x;
    int slimak=0, sradewoosh=0;
    int timesum=0;
    for(int i=0; i<n; i++){
        timesum+=t[i];
        slimak+=  max(0, p[i]- (c*timesum));
    }

    timesum=0;

    for(int i=n-1; i>=0; i--){
        timesum+=t[i];
        sradewoosh+= max(0, p[i]- (c*timesum));
    }

    if(slimak>sradewoosh) cout<<"Limak";
    else if(slimak<sradewoosh) cout<<"Radewoosh";
    else cout<<"Tie";
}
