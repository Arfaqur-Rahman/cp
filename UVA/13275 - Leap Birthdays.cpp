#include<bits/stdc++.h>
using namespace std;
#define int long long

bool leapyear(int y){
    if(y%400==0) return true;
    else if( y%4==0 && y%100!=0) return true;
    else return false;
}

signed main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int d, m, y, qy;
        cin>>d>>m>>y>>qy;
        int cnt=0;
        if(leapyear(y) && m==2 && d==29 ){
            for(int j=y+1; j<=qy; j++) if(leapyear(j)) cnt++;
            cout<<"Case "<<i<<": "<<cnt<<endl;
        }else{
            cout<<"Case "<<i<<": "<<qy-y<<endl;
        }
    }
}

/*


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1)
int main(){
    int t, cs=0;
    cin>>t;
    while(t--){
        int d, m, y1, y2;
        cin>>d>>m>>y1>>y2;
        cout<<"Case "<<++cs<<": ";
        if(d==29 && m==2){
            int c2= y2/400 + y2/4- y2/100;
            int c1=y1/400 + y1/4 - y1/100;
            cout<<c2-c1<<endl;
        }else cout<<y2-y1<<endl;
    }
}

*/
