#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    for(int z=0;z<n;z++){
            int r, p;
            float s=0;
            cin>>r;
            while(r--){
                float x;
                int y;
                cin>>x>>y;
                s+=(x*y);
            }
            cin>>p;
            int sum=p-s;
            cout<<"Case "<<z+1<<": "<<sum<<endl;
        }
}



