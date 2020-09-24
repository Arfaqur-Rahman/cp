#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    while(cin>>n){
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a, a+n);

        int price;
        cin>>price;

        int ind1, ind2;
        int l=0, h=n-1;
        while(l<=h){
            if(a[l]+a[h]<price) l++;
            else if(a[l]+a[h]==price){ // 1 2 5 6 , price = 7
                ind1=a[l];
                ind2=a[h];
                l++;
                h--;
            }
            else h--;
        }

        cout<<"Peter should buy books whose prices are "<<ind1<<" and "<<ind2<<"."<<endl<<endl;

    }
}
