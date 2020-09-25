#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string s;


    while(cin>>s){
        list<char> l;
        auto itr=l.begin();
        for(char x: s){
            if(x=='[') itr=l.begin();
            else if(x==']') itr=l.end();
            else l.insert(itr, (char)x);
        }

        for(itr=l.begin(); itr!=l.end(); itr++) cout<<*itr; cout<<endl; l.clear();
    }



}

