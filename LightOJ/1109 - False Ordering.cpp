#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1000;
int NOD[N + 1];
void generateNOD() { // O(NlogN)
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           NOD[j] += 1;
       }
   }
}


vector< pair<int, int> > v(N+1);

void vectorofnums(){
    for(int i=1; i<=N; i++) v[i]= {i, NOD[i] } ;
}

bool comparator(pair<int, int> x, pair<int, int> y){
    if(x.second< y.second) return true;
    else if(x.second==y.second && x.first>y.first) return true;
    return false;
}
int main(){
    generateNOD();
    vectorofnums();

    sort(v.begin(), v.end(), comparator);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;

        cout<<"Case "<<i<<": " <<v[n].first<<endl;
    }
}
