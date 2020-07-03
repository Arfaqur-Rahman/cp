#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool isPrime(int n) {
   if(n == 1) return true; //In this problem 1 is considered prime  
   if(n == 2) return true;
   for(int i = 2; i * i <= n; i++) {
       if( n % i == 0) return false;
   }
   return true;
}


int main(){
   string s;
   while(cin>>s){
        ll c=0;
        for(int i=0; s[i]; i++){
            if(s[i]>='a' && s[i]<='z') {c+= (s[i]-'a'+1); }
            else if(s[i]>='A' && s[i]<='Z') {c+= (s[i]-'A'+27); }

        }
        cout<<(isPrime(c) ? "It is a prime word.": "It is not a prime word.")<<endl;
   }

}
