#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        string s1, s2, s3;
        cin>>s1>>s2;
        int i;
        for(i=0; s1[i]; i++){
            if(i<s1.length()) s3+= s1[i];
            if(i<s2.length()) s3+= s2[i];
        }
       
        if(s1.length()<s2.length()){
           for(; s2[i]; i++){
                s3+= s2[i];
            } 
        }
        cout<<s3<<endl;
    }
    
 
    return 0;
}
