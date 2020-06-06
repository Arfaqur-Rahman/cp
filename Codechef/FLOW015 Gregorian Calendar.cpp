#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


string a[]={ "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };

bool isLeapYearOrNot(int year){
    if(year % 400== 0) return true;
    else if(year % 100!=0 && year % 4 == 0) return true;
    else return false;
}

signed main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int numOfDays=0, lp=0;
        if(n>=2001){
            for(int i=2001; i<n; i++) if(isLeapYearOrNot(i)) numOfDays++;
            numOfDays+= (n-2001);
            cout<<a[numOfDays%7]<<endl;
        }else{
            for(int i=n; i<2001; i++) if(isLeapYearOrNot(i)) numOfDays++;
            numOfDays+= (2001-n);
            if(numOfDays%7==0)cout<<a[numOfDays%7]<<endl;
            else cout<<a[7-numOfDays%7]<<endl;
        }

    }
}
