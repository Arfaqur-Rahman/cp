#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int tc;
   scanf("%d", &tc);
   getchar();

   for(int t=1; t<=tc; t++){

        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);


        string s3, s4;

        for(int i=0; s1[i]; i++)  if(s1[i]!=' ' ) s3+= (char)tolower(s1[i]);
        for(int i=0; s2[i]; i++)  if(s2[i]!=' ' ) s4+= (char)tolower(s2[i]);


        sort(s3.begin(), s3.end());
        sort(s4.begin(), s4.end());
       
        printf("Case %d: ", t);
        if(s3==s4) printf("Yes\n");
        else printf("No\n");

    }
}


