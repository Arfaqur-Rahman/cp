#include<iostream>
#include<string>
using namespace std;
#define int long long

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    //cout<<endl;
    while(t--){
        int a, f;
        cin>>a>>f;

        while(f--){
            for(int i=1; i<=a; i++){
                int temp=i;
                while(temp--){
                    cout<<i;
                }
                cout<<endl;
            }
            for(int i=a-1; i>=1; i--){
                int temp=i;
                while(temp--){
                    cout<<i;
                }
                cout<<endl;
            }
            if(f || t) cout<<endl; //presentation error daunted me
        }
    }
}
