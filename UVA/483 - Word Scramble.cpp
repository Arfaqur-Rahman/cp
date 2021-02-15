 #include<bits/stdc++.h>
 using namespace std;

int main(){
   string w;
   while(cin>>w){
        for(int i=w.length()-1; i>=0; i--) cout<<w[i];
        printf("%c", getchar()); // to print space or newline at the end of every word
   }
 }

//links to other sweet solutions of this same problem: 
//https://cainiaozr.wordpress.com/2012/11/09/uva-oj-483-word-scramble/
//https://www.cnblogs.com/TheLaughingMan/archive/2013/02/24/2926728.html

/* Another


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string s;
    while(getline(cin, s)){
        string temp;
        for(int i=0; s[i]; i++){
            if(s[i]!=' '){
                temp+=s[i];
            }else{
                reverse(temp.begin(), temp.end());
                cout<<temp<<" ";
                temp.clear();
            }
        }
        reverse(temp.begin(), temp.end());
        cout<<temp<<endl;
    }


}



/*
