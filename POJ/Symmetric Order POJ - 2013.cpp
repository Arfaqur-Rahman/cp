#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t, n=0;
    while(cin>>t && t){
        vector<string> v(t);

        for(int i=0; i<t; i++){
            string s; cin>>s;
            v[i]=s;
        }
        cout<<"SET "<<++n<<endl;
        for(int i=0; i<t; i+=2){
            cout<<v[i]<<endl;
        }
        for(int i=t-1; i>=1; i--) if( i & 1 )  cout<<v[i]<<endl;

    }

}

