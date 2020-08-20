#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[32];
int main(){
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){

        memset(a, 0, sizeof(a));
        int n;
        cin>>n;
        int i=0;
        while(n>0){
            a[i++]= n & 1;
            n/=2;
        }
        reverse(a, a+32);

        int posof1st1fromright=0;
        for(int i=31; i>=0; i--) if(a[i]==1) {posof1st1fromright=i; break;}

        int posof1st0from_posof1st1fromright=0;
        for(int i=posof1st1fromright-1; i>=0; i--) if(a[i]==0) {posof1st0from_posof1st1fromright=i; break;}

        a[posof1st0from_posof1st1fromright]=1;
        int zero=0, one=0;
        for(int i=posof1st0from_posof1st1fromright+1; i<32; i++){
            if(a[i]==0) zero++;
            else one++;
        }
        one--;
        zero++;

        i= posof1st0from_posof1st1fromright+1;
        while(zero--){
            a[i++]=0;
        }

        while(one--){
            a[i++]=1;
        }

        ll sum=0;
        for(int i=31; i>=0; i--) if(a[i]!=0) sum += pow(2, 31-i);
        cout<<"Case "<<tc<<": "<<sum<<endl;

        }
    return 0;
}
