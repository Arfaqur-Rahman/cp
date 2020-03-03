#include<bits/stdc++.h>
using namespace std;

//queue- first in first out
int main(){
    int n;
    queue<int> q;
    while(cin>>n){
        if(n==0) break;
        if(n==1){
            cout<<"Discarded cards:"<<endl;//If you put a zero here like this "Discarded cards: 0", you will get WA. If you put a space like this "Discarded cards: ", you will get Presentation Error. Who knew!!!
            cout<<"Remaining card: 1"<<endl;
        }
        else{
            for(int i=1;i<=n;i++) q.push(i);
            cout<<"Discarded cards: "<<q.front();
            q.pop();
            while (q.size()!=1)
            {
                q.push(q.front());
                q.pop();
                cout<<", "<<q.front();
                q.pop();
            }
            cout<<endl;
            cout<<"Remaining card: "<<q.front()<<endl;
            q.pop();
        }
    }
    return 0;
}
