 #include<bits/stdc++.h>
 using namespace std;

int main(){
    int n;
    long long m; //got WA for not using long long
    cin>>n>>m;
    int dis=0;
    while(n--){
      char c;
      int k;
      cin>>c>>k;
      if(c=='-'){
          if(m-k>=0) m-=k;
          else dis++;
      }
      else m+=k;
    }
    cout<<m<<" "<<dis;
 }
