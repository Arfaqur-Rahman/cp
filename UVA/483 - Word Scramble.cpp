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
