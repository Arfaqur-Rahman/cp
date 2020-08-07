#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    set<int> st;
    cin>>n; st.insert(n);
    cin>>n; st.insert(n);
    cin>>n; st.insert(n);
    cin>>n; st.insert(n);

    cout<<4-st.size();
}
