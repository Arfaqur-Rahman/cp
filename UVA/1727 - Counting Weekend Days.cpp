#include<bits/stdc++.h>
using namespace std;
#define int long long

map<string, int> m={
                    {
                       "JAN", 31
                    },
                    {
                       "FEB", 28
                    },
                    {
                       "MAR", 31
                    },
                    {
                        "APR", 30
                    },
                    {
                        "MAY", 31
                    },
                    {
                        "JUN", 30
                    },
                    {
                        "JUL", 31
                    },
                    {
                        "AUG", 31
                    },
                    {
                        "SEP", 30
                    },
                    {
                        "OCT", 31
                    },
                    {
                        "NOV", 30
                    },
                    {
                        "DEC", 31
                    }
                   };
string name[]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" }; // could've used another map for storing "SUN", "MON", ... 
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        int days= m[s1];
        int index; // If another map was used, I wouldn't have to write this for loop
        for(int i=0; i<7; i++){
            if(name[i]==s2){
                index=i;
                break;
            }
        }
        int c=0;
        for(int i=index; i<days+index; i++){
            if(name[i%7]=="FRI" || name[i%7]=="SAT") c++;
        }
        cout<<c<<endl;
    }
}
