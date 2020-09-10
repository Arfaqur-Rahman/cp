#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;

    while(scanf("%d", &t)!=EOF){

        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;

        bool isstack=true, isqueue=true, ispq=true;

       while(t--){

            int type, x;
            scanf("%d %d", &type, &x);

            if(type==1){
                st.push(x);
                q.push(x);
                pq.push(x);
            }else{
                if(!st.empty()){
                   if(x!=st.top() )
                   isstack=false;
                   st.pop();
                }else{
                    isstack=false;
                }

                if( !q.empty()){
                    if(x!=q.front() )
                    isqueue=false;
                    q.pop();
                }else{
                    isqueue=false;
                }

                if( !pq.empty()){
                    if(x!=pq.top() )
                    ispq=false;
                    pq.pop();
                }else{
                    ispq=false;
                }

            }

       }

        if( isstack || ispq || isqueue){
            if( isstack && !ispq && !isqueue) printf("stack\n");
            else if( !isstack && ispq && !isqueue) printf("priority queue\n");
            else if( !isstack && !ispq && isqueue) printf("queue\n");
            else printf("not sure\n");
        }else{
            printf("impossible\n");
        }



    }

}
