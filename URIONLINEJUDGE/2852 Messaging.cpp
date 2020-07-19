// https://www.urionlinejudge.com.br/judge/en/problems/view/2852

#include<bits/stdc++.h>
using namespace std;

int main(){
    string k;
    cin>>k;

    int t;
    scanf("%d", &t); getchar();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string x;
        int i=0; 
        while(ss>>x){
            if(x[0]=='a' || x[0]=='e' || x[0]=='i' || x[0]=='o' || x[0]=='u') cout<<x;
            else{

                for(char each: x){
                   int temp= each + (k[i%k.length()] -'a');
                   if(temp>'z') cout<< (char)('a' + (temp%'z' ) -1 );
                   else cout<<(char)(temp);
                    i++;
                }
             
            }
            if ( !(ss.eof())  ) cout<<" "; // if this is not checked, presentation error is encountered!
        }
        cout<<'\n';
    }
}
