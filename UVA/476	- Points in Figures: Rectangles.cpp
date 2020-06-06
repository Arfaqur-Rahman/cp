#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector< pair< pair<double, double> , pair<double, double> > > v;

signed main(){
    FAST;

    char c;
    while(cin>>c && c!='*'){
        double a, b, c, d;
        cin>>a>>b>>c>>d;
        v.push_back({ {a, b}, {c, d} });
    }

    double x, y;
    int n=0;
    while(cin>>x>>y && x!=9999.9 && y!=9999.9){
        n++;
        bool b=false;
        for(int i=0; i<v.size(); i++){
            if(x> v[i].first.first && x< v[i].second.first && y<v[i].first.second && y>v[i].second.second){
                b=true;
                cout<<"Point "<<n<<" is contained in figure "<<i+1<<endl;
            }
        }
        if(!b) cout<<"Point "<<n<<" is not contained in any figure"<<endl;
    }
    v.clear();
}
