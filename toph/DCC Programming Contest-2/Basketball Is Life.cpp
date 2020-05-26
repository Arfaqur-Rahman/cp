#include <bits/stdc++.h>

using namespace std;


int main() {
    map<string, int> m1, m2;
    for(int i=0; i<5; i++){
        string s;
        cin>>s;
        m1.insert({s, 0});
    }

    for(int i=0; i<5; i++){
        string s;
        cin>>s;
        m2.insert({s, 0});
    }

    float f; cin>>f; cin.ignore();
    string s;
    while(cin>>s && s!="Finish"){
        float x, y;
    cin>>x>>y;
    float dis= sqrt(x*x+y*y);

        if(m1.count(s)==1){
            if(dis>f) m1[s]+=3;
            else m1[s]+=2;
        }else if(m2.count(s)==1){
            if(dis>f) m2[s]+=3;
            else m2[s]+=2;
        }
    }
    int s1=0, s2=0;
    int mx=-1000000000;
    for(auto itr=m1.begin(); itr!=m1.end();itr++){
        //cout<<"itr1 "<<itr->first<< " "<<itr->second<<endl;
        s1+=itr->second; mx=max(mx, itr->second);
    }

    for(auto itr=m2.begin(); itr!=m2.end();itr++){
         //cout<<"itr2 "<<itr->first<< " "<<itr->second<<endl;
        s2+=itr->second; mx=max(mx, itr->second);
    }
    //cout<<"s1 "<<s1<<" s2 "<<s2<<endl;
    if(s1>s2) cout<<"The Leos"<<endl;
    else if(s1<s2) cout<<"The Tigers"<<endl;
    else cout<<"Draw"<<endl;


    for(auto itr=m1.begin(); itr!=m1.end();itr++){
        if(itr->second==mx) cout<<itr->first<<endl;
    }

    for(auto itr2=m2.begin(); itr2!=m2.end();itr2++){
        if(itr2->second==mx) cout<<itr2->first<<endl;
    }

	return 0;
}
