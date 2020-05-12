#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if(n & 1){
            for(int i=3; ;i+=2){
                if(n%i==0){
                    n+=i;
                    break;
                }
            }
            k--;
            while(k--){
                n+=2;
            }
        }else{
            while(k--){
                n+=2;
            }
        }

        cout<<n<<endl;
    }
}


/*******************************/
/* This code gives TLE*/
/*
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        for(int i=2, kk=1; kk<=k; i++){
            if(n%i==0){
                n+=i; 
                kk++;
                i=1; //because it will get incremented by 1 and become i=2 
            }
        }
        cout<<n<<endl;
    }
}
*/
