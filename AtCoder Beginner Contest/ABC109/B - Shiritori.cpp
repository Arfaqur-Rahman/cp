#include<bits/stdc++.h>
using namespace std;
main(void){
    int n;
    cin>>n;
    vector<string> v;
    set<string> st;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        st.insert(s);
    }

    if(st.size()!=n){
        cout<<"No"; return 0;
    }else{
        for(int i=0;i<n-1;i++){
            //cout<<v[i].length()<<endl;
            if( v[i][ v[i].length()-1 ] != v[i+1][0] ){
                cout<<"No"; return 0;
            }
        }
        cout<<"Yes";
    }
}
