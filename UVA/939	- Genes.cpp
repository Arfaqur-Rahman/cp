#include <bits/stdc++.h>
using namespace std;
#define int long long

void f(map<string, string>& gene, string& s1, string& s2, string& kid){
    if(gene[s1]=="dominant" and gene[s2]=="dominant"){
            gene[kid] = "dominant";
    }
    else if( (gene[s1]=="dominant" and gene[s2]=="recessive") or (gene[s2]=="dominant" and gene[s1]=="recessive") ){
        gene[kid] = "dominant";
    }
    else if( (gene[s1]=="dominant" and gene[s2]=="non-existent") or (gene[s1]=="non-existent" and gene[s2]=="dominant") ){
        gene[kid] = "recessive";
    }
    else if( (gene[s1]=="recessive" and gene[s2]=="recessive")  ){
        gene[kid] = "recessive";
    }
    else{
        gene[kid] = "non-existent";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n; cin>>n;
    map<string, string> gene;
    map<string, vector<string> > later;
    for(int i=1; i<=n; i++){
        string s1, s2; cin>>s1>>s2;
        if(s2=="dominant" or s2=="recessive" or s2=="non-existent"){
            gene[s1] = s2;
        }else{
            later[s2].push_back(s1);
        }
    }
//    for(auto x: gene){
//        log(x.first, x.second);
//    }
//    for(auto x: later){
//        log(x.first, x.second[0], x.second[1]);
//    }

    while(later.size()>0){
        vector<string> deletables;
        for(auto x: later){
            //cout<<x.first<< " = "<<x.second[0]<<" "<<x.second[1]<<endl;
            if(x.second.size()!=2) continue;
            string d = x.second[0];
            string m = x.second[1];
            string k = x.first;
            if(d.size() and m.size() and k.size() and gene.count(d) and gene.count(m)) { //cout<<x.first<< " x "<<x.second[0]<<" "<<x.second[1]<<endl;
                    f(gene, d, m, k);
                    deletables.push_back(k);
            }
        }
        for(auto x: deletables) later.erase(x);
    }
    for(auto x: gene) cout<<x.first<<" "<<x.second<<endl;

}
