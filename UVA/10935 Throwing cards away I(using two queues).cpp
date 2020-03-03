#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    while(cin>>n){
        if(n==0) return 0;
        if(n==1){
            cout<<"Discarded cards:"<<endl;//If you put a zero like this "Discarded cards: 0", you will get WA. If you put a space like this "Discarded cards: ", you will get Presentation Error. Who knew!!!
            cout<<"Remaining card: 1"<<endl;
            continue;
        }
        queue<int> q, q1;
        for(int i=1;i<=n;i++) q.push(i);
        while (q.size()!=1)
        {
            q1.push(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout<<"Discarded cards: "<<q1.front();
         q1.pop();
        while(!q1.empty()){
            cout<<", "<<q1.front();
             q1.pop();
        }
        cout<<endl;
        while(!q.empty()){
            cout<<"Remaining card: "<<q.front()<<endl;
            q.pop();
        }
    }
}
