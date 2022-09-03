#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(),(x).end()


struct faculty{
    string name;
    string street;
    string department;
    string homephone;
    string workphone;
    string campusbox;
};

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N; cin>>N; cin.ignore();
    multimap<string, faculty> m;
    while(N--){
        string s; getline(cin, s);
        struct faculty f1;
        f1.department=s;
        while(getline(cin, s) and s!=""){
            string temp, lastname;
            int c=0; // comma counter
            for(int i=0; i<s.size(); i++){
                if(s[i]==',') {
                    c++;
                    if(c<=2) temp+=' ';
                    else if(c==3){
                        f1.name=temp;
                        temp.clear();
                    }
                    else if(c==4){
                        f1.street=temp;
                        temp.clear();
                    }
                    else if(c==5){
                        f1.homephone=temp;
                        temp.clear();
                    }
                    else if(c==6){
                        f1.workphone=temp;
                        temp.clear();
                    }
                }
                else temp+=s[i];
                //handling the lastname for multimap with special care!
                if(c==2) lastname+=s[i];
            }
            f1.campusbox=temp;
            m.insert({lastname, f1});
        }
    }
    for(auto x: m){
        cout<<"----------------------------------------"<<endl;
        cout<<x.second.name<<endl;
        cout<<x.second.street<<endl;
        cout<<"Department: "<<x.second.department<<endl;
        cout<<"Home Phone: "<<x.second.homephone<<endl;
        cout<<"Work Phone: "<<x.second.workphone<<endl;
        cout<<"Campus Box: "<<x.second.campusbox<<endl;
    }
    return 0;
}






