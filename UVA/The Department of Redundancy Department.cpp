#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m;
    vector<int> v;
    int n;
    while(scanf("%d",&n)==1){
        if(m[n]==0){
            m[n]=1;
            v.push_back(n);
        }else{
            m[n]=m[n]+1;
        }
    }
    for(int i=0;i<v.size();i++){
        printf("%d %d\n",v[i],m[v[i]]);
    }

    return 0;
}

/*
//using unordered_map, vector and unordered_set
#include<bits/stdc++.h>
using namespace std;

int a[100000000]={0};

int main(void){
    int x;

    unordered_set<int> st;
    unordered_map<int, int> um;
    vector<int> v;
    for(int i=0; i<10; i++){
    //while(cin>>x){
        cin>>x;
        if(st.count(x)!=1){
            st.insert(x);
            v.push_back(x);
        }

        um[x]++;
    }
    for(int n: v) cout<<n<<" "<<um[n]<<endl;
}

*/
