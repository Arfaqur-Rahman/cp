#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc; cin.ignore();

    for(int t=1; t<=tc; t++){
        cout<<"Case "<<t<<":"<<endl;
        string s;
        stack<string> shamne, pichone;
        pichone.push("http://www.lightoj.com/");
        while(cin>>s){
            if(s=="QUIT") break;
            else if(s=="VISIT"){
                string cur;
                cin>>cur;
                pichone.push(cur);
                cout<<pichone.top()<<endl;

                while(!shamne.empty()) shamne.pop();
            }else if(s=="BACK"){
                if(pichone.size()>1){
                    shamne.push(pichone.top());
                    pichone.pop();
                    cout<<pichone.top()<<endl;
                }else cout<<"Ignored"<<endl;
            }else{
                if(!shamne.empty()){
                    pichone.push(shamne.top());
                    shamne.pop();
                    cout<<pichone.top()<<endl;
                }else cout<<"Ignored"<<endl;
            }
        }
    }
}
