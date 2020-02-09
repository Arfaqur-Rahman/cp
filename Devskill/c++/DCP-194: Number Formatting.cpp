#include<bits/stdc++.h>

using namespace std;
string f(char c){
    switch(c){
    case '8':
    return "Robi";
    break;
    case '7':
    return "Grameenphone";
    break;
    case '1':
    return "Citycell";
    break;
    case '5':
    return "Teletalk";
    break;
    case '6':
    return "Airtel";
    break;
    case '9':
    return "Banglalink";
    break;
    }
}
int main(void){
    int n;
    cin>>n;
    while(n--){
            string s;
            cin>>s;
            if(s[0]!='8'){
                cout<<"88"<<s<<" "<<f(s[2])<<endl;
            }
            else cout<<s<<" "<<f(s[4])<<endl;
        }
}

