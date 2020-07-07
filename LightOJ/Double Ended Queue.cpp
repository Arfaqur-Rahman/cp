#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++){
        cout<<"Case "<<t<<":"<<endl;
        int sz, q;
        cin>>sz>>q;
        deque<int> dq;
        while(q--){
            string s;
            int n;
            cin>>s;
            if(s=="pushLeft"){ cin>>n;
                if(dq.size()==sz) cout<<"The queue is full"<<endl;
                else{dq.push_front(n); cout<<"Pushed in left: "<<n<<endl;}
            }
            else if(s=="pushRight"){ cin>>n;
                if(dq.size()==sz) cout<<"The queue is full"<<endl;
                else{dq.push_back(n); cout<<"Pushed in right: "<<n<<endl;}
            }
            else if(s=="popLeft"){
                if(dq.size()==0) cout<<"The queue is empty"<<endl;
                else{cout<<"Popped from left: "<<dq.front()<<endl; dq.pop_front(); }
            }
            else if(s=="popRight"){
                if(dq.size()==0) cout<<"The queue is empty"<<endl;
                else{cout<<"Popped from right: "<<dq.back()<<endl; dq.pop_back(); }
            }
        }
    }
}
