#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char c[n];
    scanf("%s",&c);
    if(n%2){
        puts("No"); return 0;
    }
    for(int i=0;i<n/2;i++){
        if(c[i]!=c[i+n/2]){
            puts("No");
            return 0;
    }
  }
   puts("Yes");
   return 0;
}
