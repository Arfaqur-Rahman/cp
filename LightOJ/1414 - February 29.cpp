#include<bits/stdc++.h>
using namespace std;


// https://www.programmersought.com/article/5677950590/
// https://www.shawonruet.com/2017/02/lightoj-1414-february-29.html

int main(){
    int tc;
    cin>>tc;

    for(int i=1; i<=tc; i++){

        string m1, m2, comma;
        int d1, d2;
        int y1, y2;
        cin>>m1>>d1>>comma>>y1;
        cin>>m2>>d2>>comma>>y2;

        if(m1 != "January" && m1 != "February" ) y1++;         // if condition && or || dilemma
        if(m2=="January" || (m2=="February" && d2<29 ) ) y2--;

        int leapCnt1 = (y1-1)/4 - (y1-1)/100 + (y1-1)/400;
        int leapCnt2 = y2/4 - y2/100 + y2/400;

        cout<<"Case "<<i<<": "<<leapCnt2-leapCnt1<<endl;
    }
}
