#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int tc;
    cin>>tc;

    for(int t=1; t<=tc; t++){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        //for(int i=0; i<n; i++) cout<<a[i]<<" ";

        multiset<int> st;
        for(int i=0; i<k; i++) st.insert(a[i]);

        int mx=*st.rbegin()-*st.begin();

        for(int i=0, j=k; j<n; i++, j++){
            st.insert(a[j]);
            st.erase(st.find(a[i]));
            int q=*st.rbegin()-*st.begin();
            mx=max(mx, q);
        }
        cout<<"Case "<<t<<": "<<mx<<endl;
    }
}
