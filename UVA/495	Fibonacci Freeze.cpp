#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// https://sites.google.com/site/erorown/algorithmist/two

int a[5001][5001];

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    a[1][0]=a[2][0]=1;

    for(int i=3; i<=5000; i++){
        for(int j=0; j<=5000; j++){
            a[i][j] += a[i-1][j]+  a[i-2][j];
            if(a[i][j]>9){
                a[i][j+1] = a[i][j]/10;
                a[i][j]%=10;
            }
        }
    }


    int n;
    while(cin>>n){

        if(n==0){cout<<"The Fibonacci number for "<<n<<" is 0"<<endl; continue;} //This caused a lot of WA

        cout<<"The Fibonacci number for "<<n<<" is ";

        int pos;
        for(int j=5000; j>=0; j--){
            if(a[n][j]!=0) {pos=j; break;}
        }

        for(int j=pos; j>=0; j--){
            cout<<a[n][j];
        }

        cout<<endl;
    }
}



