#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<  pair<int, int>  > v;
        for(int i=0; i<n; i++){
            int x, y; cin>>x>>y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end(), sortbysec);
        int c=1;
        int current = v[0].second;
        for(int j=1; j<v.size(); j++){
//1 5, 2 6
            if(v[j].first>=current){
                c++;
                current=v[j].second;
            }

        }
        cout<<c<<endl;
    }

    return 0;
}
