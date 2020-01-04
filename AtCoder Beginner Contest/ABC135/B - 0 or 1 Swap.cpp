#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[50];
int main(){
    int t, c=0;
     scanf("%d", &t);
     vector<int> v1(t), v2(t);
    for(int i=0;i<t;i++) scanf("%d", &v1[i]);
    v2=v1;
    sort(v1.begin(), v1.end());
     for(int i=0;i<t;i++) c+= (v1[i]!=v2[i]);
     if(c==2 || c==0) printf("YES\n");
     else printf("NO\n");
    return 0;
}
