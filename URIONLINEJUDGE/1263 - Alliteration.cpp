#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    while(getline(cin, s)){
        int cnt=0, sum=0;
        stringstream ss(s);
        string x;
        bool firstTime=true;
        while(ss>>x){
            char c;
           if(firstTime){
                c=(char) tolower(x[0]);
                firstTime=false;
                continue;
           }

           if( c== (char) tolower(x[0]) ){
                cnt++;
                if(cnt==1) sum++;
           }
           else {
                c = (char) tolower(x[0]);
                cnt =0;
           }
        }

        cout<<sum<<endl;

    }

    return 0;
}
